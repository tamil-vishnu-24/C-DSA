#include<iostream>
#include<unordered_set>
using namespace std ;

int intersectionunsorted(int a[] , int b[] , int M , int N)
{
    unordered_set<int> m(a , a+M) ;
    int res = 0;
    for(int i=0;i<N;i++)
    {
        if(m.find(b[i]) != m.end())
        {
            res++ ;
            m.erase(b[i]) ;
        }
    }
    return res ;
}

int main()
{
    int a[5] = {10,20,10,20,30} ;
    int b[4] = {20 , 10 , 10 , 40} ;
    int c = intersectionunsorted(a , b ,5 , 4 ) ;
    cout<<c ;
}
