#include<iostream>
#include<math.h>
using namespace std ;

int firstoccurence(int arr[] , int N , int x)
{
    int low = 0 ;
    int high = N-1 ;
    while(low<=high)
    {
        int mid = floor((low+high)/2);
        if (arr[mid]<x)
        {
            low = mid + 1;
        }
        else if (arr[mid]>x)
        {
            high = mid - 1 ;
        }
        else{
            if (mid==low || (arr[mid]!=arr[mid-1]))
                return mid ;
            else
                high = mid - 1 ;
        }
    }
    return -1 ;
}

int lastoccurrence(int arr[] , int low  ,int high , int x)
{
    if (low>high)
    {
        return -1 ;
    }
    int mid = floor((low+high)/2);
    if (arr[mid]>x)
    {
         lastoccurrence(arr ,low , mid-1,x) ;

    }
    else if (arr[mid]<x)
    {
        lastoccurrence(arr , mid+1 , high , x);
    }
    else
    {
        if (arr[mid]!= arr[mid+1] || mid==high)
            return mid ;
        else
            lastoccurrence(arr , mid+1 , high , x) ;

    }
}

int countoccurences(int arr[] , int N , int x)
{
    int first = firstoccurence(arr , N , x) ;
    if (first == -1)
    {
        return 0 ;
    }
    else
    {
        return (lastoccurrence(arr,0,N-1,x)-first+1) ;
    }
}


int main()
{
    int arr[5] = {10 , 20 , 20 , 20 , 30} ;
    int a = countoccurences(arr , 5 , 20);
    cout<<a ;
}
