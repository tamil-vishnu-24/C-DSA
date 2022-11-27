#include<iostream>
using namespace std ;

int hoarepartition(int arr[] , int l , int h)
{
    int p = arr[l] ;
    int i = l-1 ;
    int j = h+1 ;
    while (true)
    {
        do{
            i++ ;
        }while (arr[i]<p) ;
        do{
            j--;
        }while(arr[j]>p) ;
        if (i>=j)
        {
            return j+1 ;
        }
        swap(arr[i] , arr[j]);
    }

}

int main()
{
    int arr[5] = { 5 , 3 ,2 ,1 , 8};
    int a = hoarepartition(arr , 0 , 4 );
    cout<<a ;
}
