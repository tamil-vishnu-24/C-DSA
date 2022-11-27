#include<iostream>
using namespace std;

struct Node
{
    int data ;
    Node *next ;
    Node(int x)
    {
        data = x ;
        next = NULL;
    }
};

Node *mergesorted(Node *h1, Node *h2)
{
    Node *prev = NULL ;
    Node *curr1 = h1 ;
    Node *curr2 = h2;
    int i =0 ;
     int c1 ;
    int c2 ;
    Node *head ;
    if(h1==NULL)
    {

         return h2 ;
    }
    if(h2==NULL)
    {
        return h1 ;
    }


    if(h1->data > h2->data)
    {
        Node *temp = h2->next ;
        if(h2!=NULL)
        {
            h2->next = h1 ;
        prev = h2 ;
        h2 = temp ;
        head = prev ;
        }


    }
    else if(h2->data > h1->data)
    {
        head = h1 ;
        h1 = h1->next ;
    }
    for(Node *curr = h1 ; curr!=NULL ;curr=curr->next)
    {
        c1++ ;
    }
    for(Node *curr=h2 ;curr!=NULL;curr=curr->next)
    {
        c2++ ;
    }
    while((h1!=NULL ) && (h2!=NULL))
    {
        if(h1->data >h2->data)
        {
            Node *temp = h2->next ;
            prev->next = h2;
            h2->next = h1 ;
            prev = h2 ;
            h2 = temp ;
        }
        else
        {
            curr1 = h1 ;
            h1 = h1->next ;
            prev = prev->next ;
        }
    }

    while(i<c2 && h2!=NULL)
    {
        Node *temp = h2->next ;
        curr1->next = h2 ;
        curr1 = h2 ;
        h2 = temp ;
        i++ ;
    }
    return head ;
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
    //Node *h1 = NULL;
    Node *h1 = new Node(10);
    h1->next = new Node(20);
    h1->next->next = new Node(30);
    h1->next->next->next = new Node(40);
    Node *h2 = new Node(5);
    //h2->next = new Node(15);
    //h2->next->next = new Node(17);
    //h2->next->next->next = new Node(18);
    //Node *h2 = NULL;
    Node *head = mergesorted(h1 , h2);
    printlist(head);
}
