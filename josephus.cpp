#include<iostream>
using namespace std ;
//n=5 . k =3 out =3
int jos(int n , int k)
{
    if (n==0)
    {
        return 1 ;
    }
    else{
        return (jos(n-1,k) + k )%n ;
    }
}
//n=5 k =3 out = 4
int jod(int n , int k)
{
    if (n==1)
    {
        return 1 ;
    }
    else{
        return (jos(n-1 , k)+k-1)%n +1 ;
    }
}
