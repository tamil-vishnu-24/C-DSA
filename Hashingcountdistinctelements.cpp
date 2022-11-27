#include<iostream>
#include<unordered_set>
using namespace std ;

int distinct(int arr[] , int N)
{
    unordered_set<int> s;
    for(int i=0;i<N;i++)
    {
        s.insert(arr[i]) ;
    }
    return s.size() ;
}

int main()
{
    int arr[5] = {10,20,10,20,30} ;
    int a = distinct(arr , 5) ;
    cout<<a ;
}
