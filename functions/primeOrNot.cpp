#include<iostream>
using namespace std;
int main()
{

    int a;
    cout<<"enter number";
    cin>>a;
    int j=0;
    for(int i =2;i<a ;i++)
    {
        if(a%i ==0)
        {
            j=1;
            continue;
        }

    }
    if(j==1)
    {

        cout<<"not prime number";
    }
    else{
        cout<<"prime number";
    }
    return 0;


}
