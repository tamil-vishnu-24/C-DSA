#include<iostream>
#include<math.h>
using namespace std ;

int triplet(int arr[] , int N , int x)
{
    for (int i=0;i<N;i++)
    {
        int low =i+1 ;
        int high = N-1 ;
        while(low<high)
        {
            int sum = arr[low] + arr[high] ;
            if ((arr[i]+ sum) ==x)
            {
                return 1 ;
            }
            else if ((arr[i]+sum) > x)
            {
                high = high - 1 ;
            }
            else{
                low = low + 1 ;
            }
        }

    }
    return -1 ;
}

int main()
{
    int arr[7] = {2,3,4,8,9,20,40};
    int a = triplet(arr , 7 , 32);
    cout<<a ;
}
