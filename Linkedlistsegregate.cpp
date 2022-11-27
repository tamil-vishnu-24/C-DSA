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

Node *segregateLoop(Node *head)
{
    Node *OS = NULL;
    Node *OE = NULL;
    Node *ES = NULL;
    Node *EE = NULL;
    for(Node *curr = head ; curr!=NULL;curr=curr->next)
    {
        int x = curr->data ;
        if(x%2==0)
        {
            if(ES==NULL)
            {
                ES = curr ;
                EE = ES ;
            }
            else{
                EE->next = curr ;
                EE = EE->next ;
                EE->next = NULL ;
            }
        }
        else{
            if(OS=NULL)
            {
                OS = curr;
                OE = OS ;
            }
            else{
                OE->next = curr ;
                OE = OE->next ;
                OE->next = NULL ;
            }
        }
    }
    if(OS==NULL || ES==NULL)
    {
        return head ;
    }
    EE->next = OS ;
    return ES ;
}

void printlist(Node *head)
{
    while(head!=NULL)
    {
        cout<<head->data<<" ";
        head = head->next ;
    }cout<<endl ;
}
int main()
{
    Node *head = new Node(3);
    head->next = new Node(2);
    head->next->next = new Node(5);
    head->next->next->next = new Node(4);
    head->next->next->next->next = new Node(1);
    printlist(head);
    head = segregateLoop(head);
    printlist(head);


}
