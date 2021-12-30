#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    string s = "aaassssssssdddddsdsssdddddddddddddd";
    int fre[26];
    for(int i = 0;i<26;i++)
    {

        fre[i]=0;
    }

    for(int  i =0;i<s.size();i++)
    {
        fre[s[i]-'a']++ ;
    }
    int count1=0;
int ch=0;
    for(int i =0; i<26;i++)
    {

        if(count1 <fre[i])
        {
            count1=fre[i];
            ch=i;
        }


    }
    cout<<count1<<endl;
    cout<<char(ch+'a');

}
