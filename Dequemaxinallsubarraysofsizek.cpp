#include<iostream>
#include<queue>
using namespace std ;

void maxsubarrayofsizek(int arr[] , int N , int K)
{
    deque<int> dq ;
    for(int i=0;i<K;i++)
    {
        while(!dq.empty() && arr[dq.back()]<=arr[i])
        {
            dq.pop_back();
        }
        dq.push_back(i);
    }
    for(int i=K;i<N;i++)
    {
        cout<<arr[dq.front()]<<" " ;
        while(!dq.empty() && dq.front() < i-K+1)
        {
            dq.pop_front();
        }
        while(!dq.empty() && arr[dq.back()]<=arr[i])
        {
            dq.pop_back();
        }
        dq.push_back(i) ;

    }
    cout<<arr[dq.front()]<<" " ;
}

int main()
{
    int arr[7] ={10,8,5,12,15,7,6};
    maxsubarrayofsizek(arr , 7,3);
}
