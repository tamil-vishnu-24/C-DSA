#include<iostream>
using namespace std;

void cyclesort(int arr[] , int N)
{
    for (int cs =0; cs<N-1; cs++)
    {
        int item = arr[cs] ;
        int pos = cs ;
        for(int i = cs+1 ;i<N;i++)
        {
            if (item>arr[i])
            {
                pos++ ;
            }
        }
        swap(item , arr[pos]) ;
        while (pos!=cs)
        {
            pos = cs ;
            for(int i = cs+1 ;i<N;i++)
            {
                if (item>arr[i])
                {
                    pos++ ;
                }
            }
            swap(item , arr[pos]);
        }
    }
}


int main()
{
    int arr[5]= {20,40,50,10,30} ;
    cyclesort(arr , 5) ;
    for(int i = 0;i<5;i++)
    {
        cout<<arr[i]<<" " ;
    }
}
