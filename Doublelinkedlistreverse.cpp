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
        next = NULL;
        prev = NULL;
    }
};
Node *reverselist(Node *head)
{
    if(head==NULL)
    {
        return head ;
    }
    if(head->next ==NULL)
    {
        return head ;
    }
    Node *curr = head ;
    Node *prev = NULL ;
    while(curr!=NULL)
    {
        prev = curr->prev;
        curr->prev = curr->next;
        curr->next = prev ;

        curr = curr->prev ;
    }
    return prev->prev ;
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
    head->next->prev = head ;
    head->next->next->prev = head->next ;
    head->next->next->next->prev = head->next->next ;
    head = reverselist(head);
    printlist(head);
}
