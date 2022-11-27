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
int intersection(Node *h1 , Node *h2)
{
    int c1 = 0 ;
    int c2 = 0;
    for(Node *curr = h1 ; curr!=NULL;curr=curr->next)
    {
        c1++ ;
    }
    for(Node *curr = h1 ;curr!=NULL;curr=curr->next)
    {
        c2++ ;
    }
    int ab = abs(c1-c2);
    if(c1>c2)
    {
        for(int i=1;i<=ab;i++)
        {
            h1 = h1->next ;
        }
        return h1->next->data ;
    }
    else
    {
        for(int i=1;i<=ab;i++)
        {
            h2 = h2->next ;
        }
        return h2->next->data ;
    }
}
int main()
{
    Node *h1 = new Node(10);
    h1->next = new Node(20);
    h1->next->next = new Node(30);
    h1->next->next->next = new Node(40);
    Node *h2 = new Node(35) ;
    h2->next = h1->next->next ;
    h2->next->next = h1->next->next->next ;
    int a = intersection(h1 , h2);
    cout<<a ;
}
