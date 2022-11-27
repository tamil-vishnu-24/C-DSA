#include<iostream>
using namespace std ;

void maxheapify(int arr[] , int N ,int i)
{
    int largest = i ;
    int left = 2*i + 1;
    int right = 2*i + 2 ;
    if (left<N && arr[left]>arr[largest])
    {
        left = largest ;
    }
    if (right<N && arr[right]>arr[largest])
    {
        right = largest ;
    }
    if (largest!=i)
    {
        swap(arr[largest] , arr[i]) ;
        maxheapify(arr , N , largest) ;
    }
}
void buildheap(int arr[] , int N)
{
    for(int i = (N-2)/2 ; i>=0 ;i++)
    {
        maxheapify(arr , N , i);
    }
}


void Heapsort(int arr[] , int N)
{
    buildheap(arr,N);
    for(int i =N-1;i>=1;i++)
    {
        swap(arr[0], arr[i]) ;
        maxheapify(arr , i , 0) ;
    }
    for(int i=0;i<5;i++)
    {
        cout<<arr[i]<<" " ;
    }
}

int main()
{
    int arr[5] = {10,15,50,4,20} ;
    Heapsort(arr , 5) ;

}
