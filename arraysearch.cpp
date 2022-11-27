#include<iostream>
using namespace std ;

int insert(int arr[] , int n , int x , int pos , int cap)
{
    if (n==cap)
    {
        return n ;
    }
    int index = pos -1 ;
    for(int i = n-1 ; i<=index ;i--)
    {
        arr[i+1] = arr[i] ;
    }
    arr[index] = x ;
    return n+1 ;
}

int main()
{
    int arr[5] = {2,4,5} ;
    int n = 3 ;
    int x = 2 ;
    int pos = 1 ;
    int cap = 5 ;
    cout<<insert(arr , n , x , pos , cap )<<endl ;
}
