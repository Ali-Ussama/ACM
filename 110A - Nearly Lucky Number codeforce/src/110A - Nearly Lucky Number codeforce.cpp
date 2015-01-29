#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
   string S;
   cin>>S;
   long count=0;
   for(long x=0;x<S.size();x++){
   if(S[x]=='4' || S[x]=='7')
      count++;
   }
   if(count==4 || count==7 || count==47 || count==744)
       cout<<"YES";
   else
   cout<<"NO";

   return 0;
}
