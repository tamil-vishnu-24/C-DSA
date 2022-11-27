#include<iostream>
using namespace std ;

struct myDequeue
{
    int *arr ;
    int cap ;
    int f ;
    int size ;
    int r ;
    myDequeue(int x)
    {
        cap = x ;
        arr = new int[cap];
        f = -1 ;
        size = 0;
        r = size ;
    }
    bool isEmpty()
    {
        if(size==0)
            return true ;
        else
        return false ;

    }
    bool isFull()
    {
        if(size==cap)
            return true ;
        else
            return false ;
    }
    void insertfront(int x)
    {
        if(!isFull())
        {
            if(size==0)
        {
            f = (f+1)%cap ;
            arr[f] = x ;
            size++ ;
        }
        else{
                f = (r-f+1)%cap ;
                arr[f] = x;
                size++ ;
            }
        }

    }
    void insertrear(int x)
    {
        if(!isFull())
        {
            r = (f+size-1)%cap ;
            r = (r+1)%cap ;
            arr[r] =x ;
            size++;
        }
    }
    void deletefront()
    {
        if(!isEmpty())
        f = (f+1)%cap ;
        size-- ;
    }
    void deleterear()
    {
        if(isEmpty())
        r = (r-1)%cap ;
        size-- ;
    }
    int getfront()
    {
        return f ;
    }
    int getrear()
    {
        return r ;
    }
    void print()
    {
        for(int i=0;i<size;i++ )
        {
            cout<<arr[f]<<" " ;
            f = (f+1)%cap ;

        }
    }
};

int main()
{
    myDequeue q(4) ;
    q.insertfront(10);
    q.insertrear(20);
    q.insertrear(30);
    q.deleterear();
    q.insertfront(40);
    cout<<q.getrear()<<endl ;
    q.print() ;


}
