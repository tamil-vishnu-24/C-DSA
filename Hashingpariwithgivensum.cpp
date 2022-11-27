#include<iostream>
#include<unordered_set>
using namespace std ;

int pairwithsum(int arr[] , int N , int sum)
{
    unordered_set<int> m ;
    for(int i=0;i<N;i++)
    {
        if(m.find(sum-arr[i]) != m.end())
        {
            return 1 ;
        }
        else{
            m.insert(arr[i]) ;
        }
    }
    return 0 ;
}

int main()
{
    int arr[5] = {8,3,4,2,5} ;
    cout<<pairwithsum(arr , 5 , 6) ;
}
