#include<iostream>
using namespace std ;
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
void middlelist(Node *head)
{
    if(head==NULL)
    {
        return ;
    }
    Node *slow = head ;
    Node *fast = head ;
    while(fast!=NULL && fast->next!=NULL)
    {
        slow = slow->next ;
        fast = fast->next->next ;
    }
    cout<<slow->data ;
}
int main()
{
    Node *head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);
    middlelist(head);
    return 0;
}
