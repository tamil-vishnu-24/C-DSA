#include<iostream>
#include<algorithm>
using namespace std ;

void bubblesort(int arr[] , int N)
{
    bool swapped ;
    for (int i=0;i<N-1;i++)
    {
        swapped = false ;
        for (int j=0;j<N-i-1;j++)
        {
            if (arr[j]>arr[j+1])
            {
                swap(arr[j] , arr[j+1]);
                swapped = true ;
            }
        }
        if (swapped == false)
            break ;
    }
    for (int k = 0 ;k<N;k++)
    {
        cout<<arr[k]<<" " ;
    }
}

int main()
{
    int arr[6] = {4 , 2 , 1 , 9 , 3 , 0} ;
    bubblesort(arr , 6) ;
}
