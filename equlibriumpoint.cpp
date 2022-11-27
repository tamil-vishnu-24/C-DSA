#include<iostream>
using namespace std ;

int eqpoint(int arr[] , int n)

{
    int sum ;
    for(int i=0;i<n;i++)
    {
        sum=sum+arr[i] ;
    }
    int leftsum = 0;
    for(int i=0;i<n;i++)
    {
        sum = sum-arr[i] ;

        if(leftsum==sum)
        {
            return i+1 ;
        }
        leftsum = leftsum +arr[i] ;

    }
    return -1 ;
}

int main()
{
    int arr[7] = {6,1,2,2,2,2,1};
    int a = eqpoint(arr,7);
    cout<<a ;
}
