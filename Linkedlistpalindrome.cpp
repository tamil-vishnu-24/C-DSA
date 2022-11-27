#include<iostream>
using namespace std;

struct Node
{
    char data ;
    Node *next ;
    Node(char x)
    {
        data = x ;
        next = NULL;
    }
};
Node *reverseList(Node *head){
    if(head==NULL||head->next==NULL)return head;
    Node *rest_head=reverseList(head->next);
    Node *rest_tail=head->next;
    rest_tail->next=head;
    head->next=NULL;
    return rest_head;
}

bool isPalindrome(Node *head)
{
    Node *curr = head ;
    int count = 0;
    Node *slow = head ;
    Node *fast = head ;
    while(fast->next!=NULL && fast->next->next!=NULL)
    {
        slow = slow->next ;
        fast = fast->next->next ;
    }

    Node *rev = reverseList(slow->next);
    while(rev!=NULL)
    {
        if(head->data!=rev->data)
        {
            return false ;
        }
        head = head->next ;
        rev = rev->next ;
    }
    return true ;
}
int main()
{
    Node *head = new Node('R');
    head->next = new Node('A');
    head->next->next = new Node('D');
    head->next->next->next = new Node('A');
    head->next->next->next->next = new Node('R');
    bool a = isPalindrome(head);
    cout<<a ;
}



