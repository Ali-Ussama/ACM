#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    freopen("Jouana","rt",stdin);
   long long N;
   while(cin>>N){
       long long sum=0,Sum=0;
       for(long long x=1;x<=N;x+=2){
           sum+=x;
       }
       sum=(sum*2)-1;
       for(int z=1;z<=3;z++){
           Sum+=sum;
           sum-=2;
       }
       cout<<Sum<<endl;
   }

   return 0;
}
