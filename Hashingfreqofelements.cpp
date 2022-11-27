#include<iostream>
#include<unordered_map>
using namespace std ;

void freqcount(int arr[] , int N)
{
    unordered_map<int , int> m ;
    for(int i=0;i<N;i++)
    {
        m[arr[i]]++ ;
    }
    for(auto i : m)
    {
        cout<<i.first<<" "<<i.second<<endl ;
    }
}


int main()
{
    int arr[5] = {10 , 20 , 20 , 10 , 30} ;
    freqcount(arr , 5) ;
}
