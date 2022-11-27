#include<iostream>
using namespace std ;

struct Node
{
    int data ;
    Node *next ;
    Node *prev ;
    Node(int x)
    {
        data = x ;
        next = NULL ;
        prev = NULL;
    }
};
Node *insertEnd(Node *head , int x)
{
    Node *temp = new Node(x);
    if(head==NULL)
    {
        return temp ;
    }
    Node *curr = head ;
    while(curr->next!=NULL)
    {
        curr = curr->next ;
    }
    curr->next = temp ;
    temp->prev = curr ;
    return head ;
}
void printlist(Node *head)
{
    while(head!=NULL)
    {
        cout<<head->data<<" " ;
        head = head->next ;
    }
}
int main()
{
    Node *head = NULL ;
    head = insertEnd(head , 10);
    head = insertEnd(head , 20);
    head = insertEnd(head , 30);
    printlist(head);
    return 0 ;
}
