#include<iostream>
#include<unordered_map>
using namespace std ;

int longestcommonsubarray(int arr1[] , int arr2[] , int N)
{
    int temp[N] ;
    for(int i=0;i<N;i++)
    {
        temp[i] = arr1[i] - arr2[i] ;
    }
    unordered_map<int , int> m ;
    int sum = 0;
    int res = 0;
    for(int i=0;i<N;i++)
    {
        sum = sum + temp[i] ;
        if(sum==0)
        {
            res = i+1 ;
        }
        if(m.find(sum) != m.end())
        {
            res = max(res , i - m[sum]);
        }
        if(m.find(sum) == m.end())
        {
            m.insert({sum , i});
        }
    }
    return res ;
}

int main()
{
    int arr1[6] ={0,1,0,0,0,0};
    int arr2[6] = {1,0,1,0,0,1};

    int a = longestcommonsubarray(arr1 , arr2 , 6);
    cout<<a ;
}
