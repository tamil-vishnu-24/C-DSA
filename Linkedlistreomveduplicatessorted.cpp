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

Node *removeduplicates(Node *head)
{
    if(head==NULL)
    {
        return NULL ;
    }
    Node *curr = head ;
    Node *prev = NULL;
    while(curr!=NULL&& curr->next!=NULL)
    {
        if(curr->data == curr->next->data)
        {
            Node *temp = curr->next ;
            curr->next = curr->next->next ;

        }
        else{
            curr = curr->next ;
        }
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
    Node *head = new Node(10);
    head->next = new Node(10);
    head->next->next = new Node(20);
    head->next->next->next = new Node(30);
    head->next->next->next->next = new Node(30);
    printlist(head);
    head = removeduplicates(head);
    printlist(head);

}
