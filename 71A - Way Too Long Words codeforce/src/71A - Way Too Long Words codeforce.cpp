#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
   string S;
   int n;
   cin>>n;
   for(int x=1;x<=n;x++){
   cin>>S;
   if(S.size()<=10){
       cout<<S<<endl;
   }
   else
   cout<<S[0]<<S.size()-2<<S[S.size()-1]<<endl;
   }
   return 0;
}
