#include<iostream>
using namespace std ;
#include<math.h>

void binarysearch(int arr[] , int X , int N)
{
    int low = 0;
    int high = N-1 ;
    int count = 0; // to count the n=number of times counting is required .
    while(low<=high)
    {
        int mid = floor((low+high)/2) ;
        if(arr[mid]==X)
        {
            cout<<"Element is present"<<endl ;
            cout<<count<<" "<<" times"<<endl ;
            return  ;
        }
        else if (arr[mid]< X)
        {
            low = mid+1 ;
            count++ ;
        }
        else
        {
            high = mid - 1 ;
            count++ ;
        }
    }
    cout<<"Element is not present" ;
}

int main()
{
    int arr[6] = { 5 , 8 , 2 , 1 , 7 , 9} ; // GIVEN ARRAY
    int x = 7 ; //Number to be searched ;
    binarysearch(arr , x, 6) ;

}
