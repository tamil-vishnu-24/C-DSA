#include<iostream>
#include<unordered_set>
using namespace std ;

bool subarraywithgivensum(int arr[] , int N , int sum)
{
    unordered_set<int> m ;
    m.insert(0) ;
    int prefixsum = 0;
    for(int i=0;i<N;i++)
    {
        prefixsum += sum ;
        if(m.find(prefixsum-sum) != m.end())
        {
            return true ;
        }

        else{
            m.insert(prefixsum) ;
        }
        cout<<prefixsum<<" " ;
    }
    return false ;
}

int main()
{
    int arr[4] ={2,3,4,-1};
    bool a = subarraywithgivensum(arr , 4 , 9);
    cout<<a ;
}
