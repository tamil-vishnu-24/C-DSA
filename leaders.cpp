#include<iostream>
using namespace std ;
#include<vector>

void leaders(int arr[] , int n)
{
    int leader = arr[n-1];
    cout<<leader<<" " ;
    for (int i = n-2 ;i>=0;i--)
    {
        if (leader < arr[i])
        {
            leader = arr[i] ;
            cout<<leader<<" " ;
        }
    }
}


int main()
{
    int arr[6] = { 4 , 3 , 7 , 8 , 10 , 1};
    leaders(arr , 6) ;

}
