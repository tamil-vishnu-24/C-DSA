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

void printlist(Node *head)
{
    if(head==NULL)
    {
        return ;
    }
    Node *curr = head ;
    do{
        cout<<curr->data<<" ";
        curr = curr->next ;
    }while(curr!=head) ;
}
int main()
{
    Node *head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = head ;
    printlist(head);
}
