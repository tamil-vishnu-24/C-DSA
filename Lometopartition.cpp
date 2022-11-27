#include<iostream>
using namespace std ;
//Lometo partiton - last element is considered as a pivot element

int lometopartition(int arr[] , int l , int h)
{
    int p = arr[h] ;
    int i= l-1 ;
    for (int j=l;j<h;j++)
    {
        if (arr[j]<p)
        {
            i++ ;
            swap(arr[i] , arr[j]) ;
        }
    }
    swap(arr[i+1] , arr[h]); // pivot element is swapped with 1st largest element after
    return (i+1) ;
}
    int main()
{
    int arr[5] = {8,3,2,1,5};
    int a = lometopartition(arr ,0,4);
    cout<<a ;
}

