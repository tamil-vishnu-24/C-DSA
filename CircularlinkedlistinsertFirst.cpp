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
Node *insertFirst(Node *head , int x)
{
    Node *temp = new Node(x);
    if(head==NULL)
    {
        head = temp ;
        head->next = head ;
        return head ;
    }
    temp->next = head->next ;
    head->next = temp;
    int t = head->data ;
    head->data = temp->data ;
    temp->data = t;

    return head ;
}
void printlist(Node *head)
{
    Node *curr = head ;
    do{
        cout<<curr->data<<" ";
        curr = curr->next;
    }while(curr!=head);
}
int main()
{
    Node *head = new Node(10);
    head->next = new Node(20);
    head->next->next = head ;
    head = insertFirst(head , 5);
    printlist(head);
}
