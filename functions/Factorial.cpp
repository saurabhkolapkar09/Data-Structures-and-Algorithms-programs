#include<iostream>
using namespace std;
int main()
{
    int a ;
    cin>>a;
    int fact = 1;
    for(int i = a ;i>0;i--)
    {
        fact = fact*i;

    }
    cout<<fact;
    return 0;
}
