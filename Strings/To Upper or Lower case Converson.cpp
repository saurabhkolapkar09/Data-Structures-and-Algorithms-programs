#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main()
{
    string s1="AbCdEfGhIj";

    for(int i = 0;i<s1.size();i++)
    {

        if(s1[i]>='a' && s1[i]<='z')
        {
            s1[i]-=32;

        }


    } cout<<"to Upper case :"<<s1<<endl;

    for(int i=0;i<s1.size();i++)
    {

        if(s1[i]>='A' && s1[i]<='Z')
        {

            s1[i]+=32;
        }
    }
    cout<<"TO Lower case :"<<s1<<endl;
}
