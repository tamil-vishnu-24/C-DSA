#include<iostream>
using namespace std ;

struct Node
{
    int data ;
    Node *next ;
    Node(int x)
    {
        data = x ;
        next = NULL ;
    }
};
Node *reverselist(Node *head)
{
    if(head==NULL || head->next==NULL)
    {
        return head ;
    }
    Node *rest_head = reverselist(head->next) ;
    Node *rest_tail = head->next ;
    rest_tail->next = head ;
    head->next =NULL ;
    return rest_head ;
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
    head->next->next= new Node(30);
    printlist(head);
    head = reverselist(head);
    printlist(head);
}
