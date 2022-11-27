#include<iostream>
#include<unordered_set>
using namespace std ;

int unionunsorted(int a[] , int b[] , int M , int N)
{
    unordered_set<int> m(a , a +M);
    for(int i=0;i<N;i++)
    {
        m.insert(b[i]);
    }
    return m.size() ;
}

int main()
{
    int a[4] ={15 , 20 , 5 , 15} ;
    int b[5] = {15,15,20,10,5};
    int c = unionunsorted(a , b , 4 , 5 ) ;
    cout<< c ;
}
