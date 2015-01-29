#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
	freopen("Lucky","rt",stdin);
   long T;
   while(cin>>T){
   if( T==47 || T==477 || T==447){
       cout<<"YES\n";
   }
   else if(T%4==0 || T%7==0 || T%47==0){
       cout<<"YES\n";
   }
   else{
       cout<<"NO\n";
   }}
   return 0;
}
