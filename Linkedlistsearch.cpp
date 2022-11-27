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
int searchpos(Node *head , int x)
{
    if(head==NULL)
    {
        return -1 ;
    }
    int res = 1 ;
    while(head->next!=NULL)
    {
        if(head->data ==x)
        {
            return res ;
        }
        else{
            head = head->next ;
            res++ ;
        }
    }
}
int main()
{
    Node *head = new Node(10);
    head->next = new Node(5);
    head->next->next = new Node(20);
    head->next->next->next = new Node(30);
    int a = searchpos(head , 20);
    cout<<a ;
}
