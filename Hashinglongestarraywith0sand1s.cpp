#include<iostream>
#include<unordered_map>
using namespace std ;

int osand1s(int arr[] , int N)
{
    for(int i=0;i<N;i++)
    {
        if(arr[i]==0)
        {
            arr[i] = -1 ;
        }
    }
    int res = 0;
    int sum = 0;
    unordered_map<int , int> m ;
    for(int i=0;i<N;i++)
    {
        sum = sum + arr[i] ;
        if(sum==0)
        {
            res = i+1 ;
        }
        if(m.find(sum) != m.end())
        {
            res = max(res , i-m[sum]);
        }
        if(m.find(sum) == m.end())
        {
            m.insert({sum , i}) ;
        }


    }
    return res ;
}

int main()
{
    int arr[6] ={1,1,1,1,0,0};
    int a = osand1s(arr , 6) ;
    cout<<a ;

}
