#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std ;

vector<int> distinctwindow(int arr[] , int N , int K)
{
    unordered_map<int , int> m;
    vector<int> mh ;
    for(int i=0;i<K;i++)
    {
        m[arr[i]]++ ;
    }
    mh.push_back(m.size());
    for(int i=K;i<N;i++)
    {
        m[arr[i-K]]-- ;
        if(m[arr[i-K]] == 0)
        {
            m.erase(arr[i-K]);
        }
        m[arr[i]] ++ ;
        mh.push_back(m.size()) ;
    }
    return mh ;
}


int main()
{
    int arr[6] ={10,20,10,10,30,40};
    vector<int>a = distinctwindow(arr , 6 , 4);
    for (auto it = a.begin(); it != a.end(); it++)
        cout << *it << " ";

}
