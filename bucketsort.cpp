#include<iostream>
using namespace std ;
#include<vector>
#include<algorithm>
//Bucket sort
//1.create no of buckets using vector and push each array element in the respective bucket..
//2.sort individual buckets..
//3.join the individual buckets..
void bucketsort(int arr[] , int N , int K)
{
    int mx = arr[0] ;
    for(int i = 1;i<N;i++)
    {
        mx = max(mx , arr[i]) ;
    }
    mx++ ;
    vector <int> bucket[K] ;
    for(int i = 0;i<N;i++)
    {
        int bi = (K*arr[i])/mx ;
        bucket[bi].push_back(arr[i]);
    }
    for (int i =0 ;i<K;i++)
    {
        sort(bucket[i].begin() , bucket[i].end());
    }
    int index = 0;
    for(int i = 0 ;i<K;i++)
    {
        for(int j=0;j<bucket[i].size();j++)
        {
            arr[index] = bucket[i][j] ;
            index++ ;
        }
    }
}

int main()
{
    int arr[7] = {20 , 80 , 10 , 85 , 75 , 99 , 18} ;
    bucketsort(arr , 7 , 5);
    for(int i = 0;i<7;i++)
    {
        cout<<arr[i]<< " " ;
    }
}
