#include<iostream>
using namespace std ;
#include<math.h>
/*int mergeandcount(int a[] , int l , int m , int r)
{
    int i=0;
    int j=0;
    int k=l;

    int res = 0;
    int n1 = m+1-l ;
    int n2 = r-m ;
    int left[n1] , right[n2] ;
    for (int i=0;i<n1;i++)
    {
        left[i] = a[l+i];
    }
    for (int j=0;j<n2;j++)
    {
        right[j] = a[m+1+i] ;
    }
    while (i<n1 && j<n2)
    {
        if (left[i]<=right[j])
        {
            a[k] = left[i];
            i++ ;
            k++ ;

        }
        else{
            a[k] = right[j] ;
            j++ ;
            k++;
            res= res + (n1-1) ;
        }
    }

    while(i<n1)
    {
        a[k]= left[i] ;
        i++ ;k++ ;
    }
    while(j<n2)
    {
        a[k] = right[j];
        j++ ;
        k++ ;
    }

    return res ;

}

int inversion(int arr[] , int l , int r)
{
    int res = 0 ;
     int mid = l + (r-l)/2;
     if(l<r)
    {

        res += inversion(arr , l , mid);
        res += inversion(arr,mid+1,r);
        res += mergeandcount(arr,l,mid,r);
    }
    return res ;
}*/
 long long int mergeandcount(long long a[] , long long n)
{
        long long int i=0,j=0,res=0;
        int l = 0 , r =n-1;

        long long int mid = l + (r-l)/2 ;
        long long int n1 = mid+1-l;
        long long int n2 = r-mid ;
        long long int k=l ;
        long long int left[mid+1-l];
        long long int right[r-mid];
        for(int i=0;i<n1;i++)
        {
            left[i]= a[l+i] ;
        }
        for(int j=0;j<n2;j++)
        {
            right[j]=a[mid+1+i]   ;

        }
        while(i<n1 && j<n2)
        {
            if (left[i]<=right[j])
        {
            a[k] = left[i];
            i++ ;
            k++ ;

        }
        else{
            a[k] = right[j] ;
            j++ ;
            k++;
            res= res + (n1-1) ;
        }


    while(i<n1)
    {
        a[k]= left[i] ;
        i++ ;k++ ;
    }
    while(j<n2)
    {
        a[k] = right[j];
        j++ ;
        k++ ;
    }

    return res ;
    }

}
    long long int inversionCount(long long arr[], long long N)
    {
        // Your Code Here
        long long int res = 0 ;
        if (N>1)
        {

            res += inversionCount(arr,floor(N/2));
            res += inversionCount(arr,floor((2*N-N-1)/2));
            res += mergeandcount(arr,N);
        }
        return res ;
    }




int main()
{
    long long int arr[5] = {2,4,1,3,5};
    long long int a = inversionCount(arr,5);
    cout<<a ;
}
