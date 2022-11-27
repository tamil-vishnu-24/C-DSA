#include<iostream>
#include <algorithm>
using namespace std ;

int chocolate(int arr[] , int N , int m)
{
    if (m>N)
    {
        return -1;
    }
    sort(arr , arr+N);
    int res = arr[m-1] - arr[0] ;
    for (int i=1 ;i<N-m+1 ;i++)
    {
        res = min(res , (arr[i+m-1]-arr[i]));
    }
    return res ;
}


int main()
{
    int arr[7] = {7,3,2,4,9,12,56} ;
    int a = chocolate(arr , 7 , 3) ;
    cout<<a ;
}
