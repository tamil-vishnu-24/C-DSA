#include<iostream>
using namespace std ;

bool checkprime(string str , int start , int end)
{
    if (start>=end)
    {
        return true ;
    }
    else{
        return false ;
    }
    return checkprime (str , start+1 , end -1)
}
int main()
{

}
