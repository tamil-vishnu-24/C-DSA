#include<iostream>
#include<math.h>
using namespace std ;

int peakelement(int arr[] , int N)
{
    int low = 0;
    int high =N-1 ;
    while(low<=high)
    {
        int mid = floor((low+high)/2);
        if ((mid==0 || arr[mid-1]<=arr[mid]) && (mid==N-1 || arr[mid]>=arr[mid+1]))
{

            return mid ;
        }
        else if (arr[mid]<=arr[mid+1])
        {
            low = mid + 1 ;

        }
        else
        {
            high = mid -1 ;

        }
    }
    return -1 ;
}

int main()
{
    int arr[] = {80,70};
    int a = peakelement(arr , 2);
    cout<<a ;
}
