#include<iostream>
#include<vector>
using namespace std ;

void leftrotatebyone(int arr[] , int N)
{
    vector<int>ans ;
    arr[N-1] = arr[0] ;
    for (int i=1 ;i<N;i++)
    {
        arr[i-1] = arr[i] ;
    }
    for (int i = 0; i<N;i++)
    {
        cout<<arr[i]<<" " ;
    }
}

int main()
{
    int arr[5] = {2 , 5 , 6 , 1 , 3} ;
    leftrotatebyone(arr , 5);
}
