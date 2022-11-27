#include<iostream>
#include<unordered_set>
using namespace std ;

bool subarraywithzerosum(int arr[] , int N)
{
    unordered_set<int> m ;
    int sum = 0;
    for(int i=0;i<N;i++)
    {
        sum = sum + arr[i] ;
        if(m.find(sum) != m.end())
        {
            return true ;
        }
        if(sum==0)
        {
            return true ;
        }
        else{
            m.insert(sum) ;
        }
    }
    return false ;
}


int main()
{
    int arr[6] ={1 , 4 , 13 , -3 , -10 , 5};
    bool a = subarraywithzerosum(arr , 6);
    cout<<a ;
}
