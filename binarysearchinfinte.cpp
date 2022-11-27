#include<iostream>
#include<math.h>
using namespace std ;

int searchinfinite(int arr[] , int x)
{
    if (arr[0] == x)
        return 0 ;
    int i =1 ;
    while(arr[i]<x)
    {
        i=i*2 ;
    }
    if (arr[i]==x)
        return i ;
    else
        return binarysearch(arr , i/2+1 , i-1 , x) ;
}

int main()
{
    int arr[5] = {1,2,3,5,5};
    int a = searchinfinite(arr , 4);
    cout<<a ;
}
