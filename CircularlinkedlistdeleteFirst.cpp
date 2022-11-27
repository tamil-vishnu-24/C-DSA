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

Node *deleteFirst(Node *head)
{
    if(head==NULL)
    {
        return NULL ;
    }
    if(head->next == head)
    {
        delete head ;
        return NULL ;
    }
    Node *temp = head->next ;
    int t = head->data ;
    head->data = temp->data ;
    temp->data = t ;
    head->next = temp->next ;
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
    head->next->next->next = head;
    printlist(head);
    head = deleteFirst(head);
    printlist(head);
    return 0 ;
}
