#include<iostream>
using namespace std;


int countset(int n)
{
    int count = 0;
    while(n>0)
    {
        if(n%2!=0) //To check last digit is 1
        {
            count ++ ;
        }
        n = n/2 ;  //To remove last digit in binary representation
    }
    return count ;
}


int main()
{
    int n ;
    cin >> n ;
    cout<<countset(n) ;
    return 0;
}
