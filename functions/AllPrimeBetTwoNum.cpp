#include<iostream>
using namespace std;

void prime(int n)
{
    int j = 0;
    for(int i = 2;i<n;i++)
    {
        if(n%i == 0)
        {
            j = 1;
        }
    }
    if(j ==0)
    {
        cout<<n<<" ";
    }

}

int main()
{
    int n,m;
    cin>>n;
    cin>>m;

    for(int i = n ;i<=m ;i++)
    {
        prime(i);
    }
}
