#include<iostream>
using namespace std;
int main()
{
    int m,n;
    cin>>m>>n;
    int a1[m],a2[n];
    int a[m+n];
    for(int k = 0;k<m;k++)
    {
        cin>>a1[k];

    }

    for(int k = 0;k<n;k++)
    {
        cin>>a2[k];
    }
    int p=0;
    int i = 0,j=0;
    while( i <m && j<n)
    {
        if(a1[i]>=a2[j])
        {

            a[p]=a2[j];
            j++;
            p++;
        }
        else{
            a[p]=a1[i];
            i++;
            p++;
        }

    }
    while(i<m)
    {

        a[p]=a1[i];
        p++;
        i++;
    }
    while(j<n)
    {

        a[p] = a2[j];
        j++;
        p++;
    }
    for(int k =0;k<(m+n);k++)
    {
        cout<<a[k]<<" ";

    }
}
