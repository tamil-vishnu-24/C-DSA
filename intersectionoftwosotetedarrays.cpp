#include<iostream>
using namespace std ;

void intersection(int a[] , int b[] , int n1 , int n2)
{
    int i = 0 ;
    int j= 0;
    int key = a[0] ;
    while(i<n1 && j<n2)
    {
        if (a[i] == b[j])
        {
            if (key != a[i]  || (i==0 && (key==a[i])))
            {
                cout<<a[i]<<" " ;
                key = a[i] ;
                i++ ;
                j++ ;

            }
            else{i++;j++;}
        }
        else {
            if (a[i]<=b[j])
            {
                i++ ;
            }
            else{
                j++ ;
            }
        }
    }
}

int main()
{
    int a[] = {3,5,10,10,10,15,15,20} ;
    int b[] = {3,10,10,15,30} ;
    intersection(a,b,8,5) ;
}
