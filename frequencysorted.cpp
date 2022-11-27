#include<iostream>
using namespace std ;

void freq(int arr[] , int N)
{
    int freqq = 1;
    int i=1;
    while(i<N)
    {
        while(i<N && arr[i] == arr[i-1])
        {
            freqq++ ;
            i++ ;
        }
        cout<<arr[i-1]<<" "<<freqq<<endl ; ;
        i++ ;
        freqq = 1 ;
    }
    if (N==1 || arr[N-1]!= arr[N-2])
    {
        cout<<arr[N-1]<<" "<<1 ;
    }
}
int main()
{
    int arr[5] = { 2 , 2 , 2 , 5 , 5} ;
    freq(arr ,5) ;
}
