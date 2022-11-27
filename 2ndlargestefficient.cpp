#include<iostream>
using namespace std ;

int secondlargest(int arr[] , int N)
{
    int res = -1 ; //2nd largest element index is set to -1..so if no 2nd largest element..it returns 0.
    int largest = 0; //largest element index is set to 0 ;
    for (int i=1;i<N;i++)
    {
        if (arr[i]>arr[largest])
        {
            res = largest ;
            largest = i;
        }
        else if (arr[i]<arr[largest])
        {
            if (res==-1)  //Never seen a 2nd largest element before
            {
                res = i ;
            }
            else if (arr[i]>arr[res]) //Checking if ith element is greater than arr[res] (2nd largest element)
            {
                res = i ;
            }
        }
    }
    return res ;
}
int main()
{
    int arr[3] = {10 , 10 , 10} ;
    cout<<secondlargest(arr , 3) ;
}
