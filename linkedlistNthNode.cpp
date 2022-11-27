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
void NthNode(Node *head, int x)
{
    int i = 1 ;
    Node *first = head ;
    Node *second = head ;
    while(i<=x)
    {
        first = first->next ;
        i++ ;
    }
    while(first!=NULL)
    {
        first = first->next ;
        second = second->next ;
    }
    cout<<second->data ;
}
int main()
{
    Node *head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);
    NthNode(head , 2);
}
