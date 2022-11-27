#include<iostream>
#include<unordered_map>
using namespace std ;

int longestsubarray(int arr[] , int N , int sum)
{
    unordered_map<int , int> m ;
    int res = 0;
    int prefix = 0;
    for(int i=0;i<N;i++)
    {
        prefix = prefix + arr[i] ;
        if(prefix == sum)
        {
            res = i+1 ;
        }
        if(m.find(prefix) == m.end())
        {
            m.insert({prefix , i});
        }
        if(m.find(prefix-sum) != m.end())
        {
            res = max(res , (i-m[prefix-sum])) ;
        }
    }
    return res ;
}

int main()
{
    int arr[8] ={8,3,1,5,-6,6,2,2};
    int a = longestsubarray(arr , 8 , 4);
    cout<<a ;
}
