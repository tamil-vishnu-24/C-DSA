#include<iostream>
using namespace std ;

int buyandsell(int arr[] , int N)
{
    int profit = 0 ;
    for (int i=1;i<N;i++)
    {
        if (arr[i]>arr[i-1])
        {
            profit = profit + (arr[i] - arr[i-1]) ;
        }
    }
    return profit ;
}

int main()
{
    int arr[5] = {100 , 200 , 201 , 50 , 102};
    int maxprofit = buyandsell(arr,5);
    cout<<maxprofit ;
}
