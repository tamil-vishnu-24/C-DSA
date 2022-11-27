#include<iostream>
using namespace std ;

struct Node {
int data;
Node *next;
Node(int x)
{
    data = x ;
    next = NULL ;
}
};

Node *insertSorted(Node *head , int x)
{
    Node *temp = new Node(x);
    if(head==NULL)
    {
        temp->next = NULL ;
        return temp ;
    }
    Node *curr = head ;

        if(head->data >x)
        {
            head->next = temp ;
            return head ;
        }

    while(curr->next!=NULL&& curr->next->data <x)
    {
        if(curr->data<x)
        {
            curr = curr->next ;
        }
        else{
            temp->next = curr->next ;
            curr->next = temp ;
            return head ;
        }
    }
    if(curr->data <x)
    {
        curr->next = temp ;
        return head ;
    }

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
    head = insertSorted(head , 45);
    printlist(head);
}
