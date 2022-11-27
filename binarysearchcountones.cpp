#include<iostream>
#include<math.h>
using namespace std ;

int countones(int arr[] , int N)
{
    int low = 0;
    int high = N-1 ;
    while(low<=high)
    {
        int mid = floor((low+high)/2);
        if ( arr[mid] == 0)
            low = mid + 1 ;
        else{
            if (mid==low || (arr[mid-1]==0))
                return N-mid ;
            else
                high = mid-1 ;
        }
    }
    return -1 ;
}

int main()
{
    int arr[6] = {0,0,1,1,1,1};
    int a = countones(arr , 6);
    cout<<a ;
}
