#include<iostream>
using namespace std ;
struct Node
{
    int data ;
    Node *next ;
    Node(int x)
    {
        data = x ;
        next =NULL;
    }
};
Node *deleteKth(Node *head , int k)
{
    if(head->next==head)
    {
        delete head ;
        return NULL ;
    }
    Node *curr = head ;
    if(k==1)
    {
        curr->data = curr->next->data;
        Node *temp = curr->next ;
        curr->next = curr->next->next ;
        delete temp ;
        return curr ;
    }
    int i=1;
    while(i<=k-2&&curr->next!=head)
    {
        curr=curr->next;
        i++ ;
    }
    if(curr->next==head)
    {
        return head ;
    }
    Node *temp = curr->next ;
    curr->next = curr->next->next ;
    delete temp ;
    return head ;
}
void printlist(Node *head)
{
    Node *curr = head ;
    do
    {
        cout<<curr->data<<" ";
        curr = curr->next ;
    }while(curr!=head);
}
int main()
{
    Node *head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);
    head->next->next->next->next = head;
    printlist(head);
    head = deleteKth(head , 5);
    printlist(head);
}
