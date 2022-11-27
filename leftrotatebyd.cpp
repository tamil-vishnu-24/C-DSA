#include<iostream>
using namespace std ;
void reversal(int arr[] , int low , int high)
{
    while(low<high)
    {
        swap(arr[low] , arr[high]);
        low++ ;
        high-- ;
    }
}

void leftroatatebyd(int arr[] , int N , int d)
{
    reversal(arr , 0 , d-1);
    reversal(arr , d , N-1);
    reversal(arr , 0 , N-1);


}


int main()
{
    int arr[7] = { 1 , 2 ,3 , 4, 5, 5, 6};
    int N = 7 ;
    leftroatatebyd(arr , N , 3) ;

    cout<<"After rotation" <<endl ;

    for (int i=0;i<N;i++)
    {
        cout<<arr[i]<<" " ;
    }

}
