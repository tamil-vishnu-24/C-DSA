#include<iostream>
#include<math.h>
using namespace std ;

int squareroot(int x)
{
    int low = 1 ;
    int high = x ;
    int ans = -1 ;
    while(low<=high)
    {
        int mid = floor((low+high)/2);

        if (mid*mid == x)
            return mid ;
        else if (mid*mid >x)
            high = mid -1 ;
        else if (mid*mid <=x)
            low = mid + 1 ;
            ans = floor(mid) ;
    }
    return ans ;
}

int main()
{
    cout<<"Enter any number " ;
    int a ;
    cin>>a ;
    int b = squareroot(a);
    cout<<b ;
}
