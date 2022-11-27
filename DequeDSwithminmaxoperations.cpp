#include<iostream>
using namespace std ;
#include<queue>

struct myDQ
{
    deque<int>dq ;
    void insertmin(int x)
    {
        dq.push_front(x);
    }
    void insertmax(int x)
    {
        dq.push_back(x);
    }
    int getmin()
    {
        return dq.front();
    }
    int getmax()
    {
        return dq.back();
    }
    void extractmin()
    {
        dq.pop_front();

    }
    void extractmax()
    {
        dq.pop_back();
    }
};
int main()
{
    myDQ dq ;
    dq.insertmin(5);
    dq.insertmax(10);
    dq.insertmin(1);
    dq.insertmax(15);

    cout<<dq.getmin()<<" "<<dq.getmax()<<" " ;

}
