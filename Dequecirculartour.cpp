#include<iostream>
using namespace std ;

int firstpetrolpump(int p[] , int d[] , int n)
{
    int start = 0;
    int prev = 0;
    int curr = 0 ;
    for(int i=0;i<n;i++)
    {
        curr = curr + (p[i]-d[i]);
        if(curr<0)
        {
            start = i+1;
            prev = prev + curr ;
            curr = 0;
        }
    }
    return ((prev+curr)) ? (start+1):-1 ;
}
int main()
{
    int p[4] ={50,10,60,100};
    int d[4] = {30,20,100,10};
    int a = firstpetrolpump(p,d,4);
    cout<<a ;
}
