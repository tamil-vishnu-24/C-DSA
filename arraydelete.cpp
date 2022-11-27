#include<iostream>
using namespace std ;

int deletearray(int arr[] , int N ,int x)
{
    int i ;
    for(i = 0;i<=N;i++)
    {
        if (arr[i] == x)
        {
            cout<<i<<"" ;
            break ;
        }
        cout<<i<<" "<<endl ;;
    }
    cout<<i<<endl ;
    if (i==N)
    {
        return N ;
    }
    for(int j=i;j<N-1;j++)
    {
        arr[j] = arr[j+1] ;
    }
    return N-1 ;
}

int main()
{
    int N = 5 ; int arr[5] = {4 , 6 , 5 , 2 , 1} ;
    int x = 1 ;
     N = deletearray(arr, N, x);

       cout<<"After Deletion"<<endl;

       for(int i=0; i < N; i++)
       {
       		cout<<arr[i]<<" ";
       }
    return 0;
}
