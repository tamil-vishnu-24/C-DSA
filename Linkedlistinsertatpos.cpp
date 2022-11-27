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

Node *insertpos(Node *head , int data , int pos)
{
    Node *temp = new Node(data);
    if(pos==1)
    {
        temp->next = head ;
        return temp ;
    }
    Node *curr = head ;
    for(int i=1;i<=pos-2&&curr!=NULL;i++)
    {
        curr = curr->next ;
    }
    if(curr == NULL)
    {
        return NULL ;
    }
    temp->next = curr->next ;
    curr->next = temp ;
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
    Node *head = new Node(10) ;
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(50);
    printlist(head);
    head = insertpos(head , 40 , 4);
    printlist(head);
}
