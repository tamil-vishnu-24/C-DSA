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

bool isLoop(Node *head)
{
    Node *temp = new Node(0) ;
    if(head==NULL)
    {
        return false ;
    }
    if(head->next=NULL)
    {
        return false ;
    }
    Node *curr = head ;
    curr->next = temp ;
    while(curr!=NULL)
    {
        if(curr->next==NULL)
        {
            return false ;
        }
        if(curr->next==temp)
        {
            return true ;
        }
        Node *temp1 = curr->next ;
        curr->next = temp ;
        curr = temp1 ;
    }
    return false ;
}

int main()
{
     Node *head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);
    head->next->next->next->next = head ;
    bool a = isLoop(head);
    cout<<a ;

}
