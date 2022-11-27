#include<iostream>
using namespace std ;


struct myHash {
    int *arr ;
    int cap ;
    int size ;
    myHash(int c)
    {
        cap = c;
        size = 0;
        for(int i=0;i<cap;i++)
    }
};
