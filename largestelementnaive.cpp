#include<iostream>
using namespace std ;
int largest(int arr[] , int N)
{
    for (int i = 0;i<N;i++)
    {
        bool flag = true ;
        for (int j=0;j<N;j++)

        {
            cout<<i<<" "<<j<<endl ;
            if (arr[j] > arr[i])
            {
                flag = false ;
                break ;

            }
            //cout<<i<<" " ;
        }
        if (flag == true)
        {
            return i ;
        }
    }
    return -1 ;
}
int main()
{
    int N = 4;
    int arr[4] = {5,8,20,10};
    cout<<largest(arr , N) ;
}
