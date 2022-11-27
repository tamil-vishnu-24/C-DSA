#include<iostream>
#include<math.h>
using namespace std ;

int countocc(int arr[] , int N , int x)
{
    int low = 0 ;
    int high = N-1 ;
    int count = 0 ;
    while(low<=high)
    {
        int mid = floor((low+high)/2);
        if (arr[mid]<x)
        {
            low = mid+1 ;
        }
        else if (arr[mid]>x)
        {
            high = mid-1 ;
        }
        else
        {
            if (arr[mid]==x)
            {
                count ++ ;
            }
            if (arr[mid] == arr[mid-1])
            {
                count++ ;
                high = mid -1 ;
            }
            if (arr[mid]== arr[mid+1])
            {
                count ++ ;
                low = mid+1 ;
            }
        }
    }
    return count ;
}

int main()
{
    int arr[6] = {10,20,20,20,30,30};
    int x =20;
    int a = countocc(arr , 6 , 20 ) ;
    cout<<a;
}
