#include<iostream>
using namespace std ;

struct Node
{
    int data ;
    Node *next ;
    Node(int x)
    {
        data = x;
        next = NULL ;
    }
};

Node*reversegrp(Node *head , int k)
{
    Node *curr = head ;
    Node *prevFirst = NULL ;
    bool isFirstpass = true ;
    while(curr!=NULL)
    {
        Node *first = curr ;
        Node *prev = NULL;
        int count =0 ;
        while(curr!=NULL &&count<k)
        {
            Node *temp = curr->next ;
            curr->next = prev ;
            prev = curr ;
            curr = temp ;
            count++ ;
        }
        if(isFirstpass)
        {
            head = prev ;
            isFirstpass = false ;
        }
        else{prevFirst->next = prev ;}
        prevFirst = first ;
    }
    return head ;
}
void printlist(Node *head)
{
    while(head!=NULL)
    {
        cout<<head->data<<" ";
        head = head->next ;
    }
}



int main()
{
     Node *head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);
    head->next->next->next->next = new Node(50);
    head = reversegrp(head , 3);
    printlist(head);

}
