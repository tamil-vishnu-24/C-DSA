#include<iostream>
#include<math.h>
using namespace std ;

int binarysearch(int arr[] , int low , int high , int x)
{
    if (low>high)
    {
        return -1 ;
    }
    int mid = floor((low+high)/2);

    if (arr[mid]>x)
    {
        binarysearch(arr , low , mid-1,x);
    }
    else if  (arr[mid]<x)
    {
        binarysearch(arr,mid+1,high,x);
    }
    else{
     if (arr[mid]!=arr[mid-1]|| (mid == low))
    {
        return mid ;
    }
    else
    {
        binarysearch(arr , low , mid-1 , x);
    }
    }
}


int main()
{
    int arr[7] = {5,10,10,15,20,20,20};
    int x = 20 ;
    int a = binarysearch(arr , 0 , 6 , x);
    cout<<a ;
}
