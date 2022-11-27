#include<iostream>
using namespace std;

struct Node
{
    int data ;
    Node *next ;
    Node *prev ;
    Node(int x)
    {
        data = x ;
        next = NULL;
        prev = NULL;
    }
};
Node *deleteLast(Node *head)
{
    if(head==NULL)
    {
        return NULL ;
    }
    if(head->next==NULL)
    {
        delete head ;
        return NULL ;
    }
    Node *curr = head ;
    while(curr->next!=NULL)
    {
        curr = curr->next ;
    }
    curr->prev->next = NULL ;
    delete curr ;
    return head ;
}
void printlist(Node *head)
{
    while(head!=NULL)
    {
        cout<<head->data<< " ";
        head = head->next ;
    }cout<<endl ;
}
int main()
{
    Node *head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->prev = head ;
    head->next->next->prev = head->next ;
    printlist(head);
    head = deleteLast(head);
    printlist(head);
    return 0 ;

}
