#include<iostream>
using namespace std ;

struct Node{
    int data ;
    Node *next ;
    Node(int x){
        data = x ;
        next = NULL ;
    }
};

Node *insertend(Node *head , int x)
{
    Node *temp = new Node(x);
    if(head==NULL)
    {
        return temp ;
    }
    Node *curr = head ;
    while(curr->next != NULL)
    {
        curr = curr->next ;
    }
    curr->next = temp ;
    return head ;
}
void printlist(Node *head)
{
    while(head!= NULL)
    {
         cout<<head->data<<" ";
         head = head->next ;
    }
}

int main()
{
    Node *head = NULL ;
    head = insertend(head , 10);
    head = insertend(head , 20);
    head = insertend(head , 30);
    printlist(head);

}
