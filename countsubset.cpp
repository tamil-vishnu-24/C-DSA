#include<iostream>
using namespace std ;

int countsubset(int arr , int n , int current ,int sum)
{
    if (n==0)
    {
        if (current==sum)
        {
            return 1 ;
        }
        return 0 ;
    }
    countsubset(arr , n-1 , current , sum);
    countsubset(arr , n-1 , current+ arr[n-1] ,  sum) ;
}

int main()
{
    int array[3] = {10,15,20};
    int sum = 25 ;
    cout<<countsubset(arr,3,{},25) ;

}
