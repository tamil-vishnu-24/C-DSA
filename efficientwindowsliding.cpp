#include<iostream>
using namespace std ;

bool windowsliding(int arr[] , int n ,int k, int givensum)
{
    int currsum = 0;
    int s = 0 ;
    for(int i=0;i<n;i++)
    {

        while(currsum>givensum)
        {
            currsum = currsum - arr[s] ;
            s++ ;
        }
        if (currsum == givensum)
        {
            return true ;
        }
        if(currsum<givensum)
        {
            currsum = currsum + arr[i] ;
        }
    }
    return (currsum == givensum) ;
}

int main()
{
    int arr[6] = {1,4,20,3,10,5};
    int a = windowsliding(arr,6,3,33);
    cout<<a;

}
