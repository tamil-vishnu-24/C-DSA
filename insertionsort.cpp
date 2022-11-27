#include<iostream>
#include<algorithm>
using namespace std ;

void insertionsort(int arr[] , int N)
{
    for (int i=1;i<N;i++)
    {
        int key = arr[i] ;
        int j=i-1 ;
        while(j>=0 && arr[j]>key)
        {
            arr[j+1] = arr[j] ;
            j-- ;
        }
        arr[j+1] = key ;
    }

    for (int k=0;k<N;k++)
    {
        cout<<arr[k]<< " " ;
    }
}
int main()
{
    int arr[5] = {4 , 5 , 1 , 3, 7} ;
    insertionsort(arr , 5) ;
}
