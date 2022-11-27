#include<iostream>
using namespace std ;

int countset(int n)
{

    int res = 0 ;
    while(n>0)
    {
        n = (n&(n-1));  // when we a subtract a number from 1..the 0s from the right side till the 1st set but becomes 1 and the 1st set bit becomes 0;
        res++ ;
    }
    return res ;
}


int main()
{

    int n ;
    cin>>n ;
    cout<<countset(n) ;
    return 0 ;
}
