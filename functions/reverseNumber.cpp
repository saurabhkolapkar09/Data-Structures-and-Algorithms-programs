#include<iostream>
 using namespace std;

 int main()
 {
     int a;
     cin>>a;
     int p ;
     int i = 1;
     while(i==1)
     {
         p = a%10;
         a = a/10;
         cout<<p;

         if(a == 0 )
         {
             i= 0;
         }

     }
     return 0;

 }
