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

Node *insertatbegining(Node *head , int x)
{
    Node *temp = new Node(x);
    temp->next = head ;
    return temp ;
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
    Node *head = NULL ;
    head = insertatbegining(head , 30);
    head = insertatbegining(head , 20);
    head = insertatbegining(head , 10);
    head = insertatbegining(head , 5) ;
    printlist(head) ;
}
