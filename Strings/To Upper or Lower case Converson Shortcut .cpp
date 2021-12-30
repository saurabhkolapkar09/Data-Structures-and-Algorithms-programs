#include<iostream>
#include<algorithm>
#include<string>
#include<bits/stdc++.h>

using namespace std;

int main()
{

    string s = "asSedASdCczZdc";

    //to convert upper case;


    transform(s.begin(),s.end(),s.begin(),::toupper);
    cout<<s<<endl;


    //to Lowercase:

    transform(s.begin(),s.end(),s.begin(),::tolower);

    cout<<s<<endl;
}
