#include<iostream>
using namespace std;

void fab(int n)
{
    int t1 = 0,t2 = 1 ,next ;
    for(int i = 1 ;i<=n;i++)
    {
        next = t1+t2;
        cout<<next<<" ";
        t2 = t1;
        t1 = next;


    }
}

int main()
{
    int a;
    cin>>a;

    fab(a);
    return 0;
}
