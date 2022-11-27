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
        prev = NULL ;
    }
};
Node *insertFirst(Node *head , int x)
{
    Node *temp = new Node(x);
    temp->next = head ;
    if(head!=NULL)
    {
        head->prev = temp  ;
    }

    return temp ;
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
    Node *head = NULL ;
    //head->next = new Node(20);
    //head->next->next = new Node(30);

    //head->next->prev = head ;
    //head->next->next->prev = head->next ;

    head = insertFirst(head , 5);
    printlist(head);
}
