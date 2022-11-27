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
        prev = NULL ;
        next = NULL;
    }
};
Node *deleteFirst(Node *head)
{
    if(head==NULL || head->next==NULL)
    {
        return NULL ;
    }
    Node *temp = head ;
    temp->next->prev = NULL ;
    Node *temp2 = head->next ;
    delete head ;
    return temp2 ;
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
    printlist(head);
    head = deleteFirst(head);
    printlist(head);
}
