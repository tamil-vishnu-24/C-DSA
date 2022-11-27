#include<iostream>
#include<fstream>
using namespace std ;

int table[256];
void initialize()
{
    //Assigning the number of set digits in a 32 bit from 0 to 255
        table[0] = 0;
        for(int i =1 ;i<=255 ;i++)
        {
            table[i] = (i&1) + table[i/2]  ;
        }
}
int countset(int n)
{



    int res  ;
    res = table[n & 0xff] ;
    n = n>>8 ;
    res = res + table[n&0xff] ;
    n = n>>8 ;
    res = res + table[n&0xff] ;
    n = n>>8 ;
    res = res + table[n&0xff] ;

   return res;
}

int main()
{
    int n ;
    initialize() ;
    cin>> n ;
    cout<<countset(n) ;
    return 0 ;
}
