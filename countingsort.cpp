using namespace std ;

void countingsort(int arr[] , int N , int K)
{
    int count[K] ;
    for(int i=0;i<K;i++)
    {
        count[i] = 0 ;
    }
    for(int i = 0 ;i<N;i++)
    {
        count[arr[i]] ++ ;
    }
    for (int i = 1 ;i<K;i++)
    {
        count[i] = count[i-1] + count[i] ;
    }
    int output[N] ;
    for(int i = N-1 ; i>=0 ; i--)
    {
        output[count[arr[i]] - 1 ] = arr[i] ;
        count[arr[i]]-- ;
    }
     for (int i=0;i<6;i++)
    {
        arr[i] = output[i] ;
    }

}


int main()
{
    int arr[6] = {1,4,4,1,0,1};
    countingsort(arr , 6 , 5) ;
    for (int i=0;i<6;i++)
    {
        cout<<arr[i]<<" " ;
    }
}
