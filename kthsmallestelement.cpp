#include<iostream>
using namespace std ;
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

int kthsmall(int arr[] , int N , int K)
{
    int l = 0;
    int r = N-1 ;
    while(l<=r)
    {
        int p = lometopartition(arr , l , r);
        if (p==K-1)
        {
            return p ;
        }
        else if (p<K-1)
        {
            l = p+1 ;
        }
        else{
            r = p-1 ;
        }
    }
        return -1 ;
}



int main()
{
    int arr[5] = {30 ,20 , 5 , 10 , 8} ;
    int K=4 ;
    int a = kthsmall(arr , 5 , K) ;
    cout<<a ;
}
