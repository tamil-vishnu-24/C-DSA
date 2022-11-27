#include<iostream>
using namespace std ;

struct Node
{
    int data ;
    Node *next ;
    Node(int x)
    {
        data = x;
        next = NULL ;
    }
};

Node *removeLoop(Node *head)
{
    Node *slow = head ;
    Node *fast = head ;
    while(fast!=NULL && fast->next!=NULL)
    {
        slow = slow->next ;
        fast = fast->next->next ;
        if(slow == fast)
        {
            break ;
        }
    }
    if(slow!=fast)
    {
        return head ;
    }
    slow = head ;
    while(slow->next!=fast->next)
    {
        slow = slow->next ;
        fast = fast->next ;
    }
    fast->next = NULL ;
    return head ;
}
int main()
{
     Node *head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);
    head->next->next->next->next = head ;
    head = removeLoop(head);


}
