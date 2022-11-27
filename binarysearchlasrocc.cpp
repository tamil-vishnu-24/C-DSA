#include<iostream>
#include<math.h>
using namespace std ;

int binarysearch(int arr[] , int N , int x )
{

    int low = 0 ;
    int high = N-1;
    while(low<=high)
    {

        int mid = floor((low+high)/2);
        if(arr[mid]<x)
        {
            low = mid + 1;  //Moving to right half
        }
        else if (arr[mid]>x)
        {
            high = mid-1 ; //Moiving to left half
        }
        else{
            if(arr[mid]!=arr[mid+1]|| mid==high)
            {
                return mid ;
            }
            else{
                low = mid+1 ;
            }
        }
    }
    return -1 ;

}

int main()
{
    int arr[5] = {5,8,8,10,10};
    int a = binarysearch(arr,5,10);
    cout<<a ;
}
