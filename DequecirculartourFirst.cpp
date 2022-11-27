#include<iostream>
#include<queue>
using namespace std ;

int firstcirculartour(int petrol[] , int distance[] , int N)
{
    deque<int> dq ;
    int curr_petrol = 0 ;
    int i = 0;
    while((!dq.empty() && dq.front()!=dq.back() ) || curr_petrol<=0)
    {
        while(!dq.empty() && curr_petrol<0)
        {
            curr_petrol = curr_petrol - petrol[dq.front()] + distance[dq.front()];
            dq.pop_front();
        }
        dq.push_front(i);

        curr_petrol = curr_petrol + petrol[i] - distance[i];
        i = (i+1)%N ;

    }
    if(!dq.empty() && curr_petrol>0)
    {
        return dq.front()+1;
    }
    else{
        return -1 ;
    }

}
int main()
{
    int petrol[4] =  {50,10,60,100}   ;
    int distance[4] = {30,20,100,10}   ;

    int a = firstcirculartour(petrol , distance , 4);
    cout<<a ;

}
