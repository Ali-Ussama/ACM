
#include <iostream>
#include <vector>
#include <stack>
#include <set>
#include <iterator>
#include <stdio.h>
using namespace std;
int main()
{
    freopen("burger","rt",stdin);
   long long L;
   string road;
   while(cin>>L){
       if(L==0){
           break;
       }
       set<long long> mySet;
       cin>>road;
       long count,y=0;
       for(long long x=y;x<L;x++){
           count=0;
           if((road[x]=='R' && road[x+1]=='D')||(road[x]=='D'&&road[x+1]=='R') ){
               mySet.insert(1);
           }
           else if(road[x]=='R' && road[x+1]=='.'){
               for(y=x+1;y<L;y++){
                   if(road[y]=='.'){
                     count++;}
                     else if(road[y]=='D'){
                         count++;
                         mySet.insert(count);
                         break;
                     }
                     else if(road[y]=='Z'){
                        mySet.insert(0);
                             break;
               }
               }
           }
        else if(road[x]=='D' && road[x+1]=='.'){
               for(y=x+1;y<L;y++){
                   if(road[y]=='.'){
                     count++;}
                     else if(road[y]=='R'){
                         count++;
                         mySet.insert(count);
                         break;
                     }
                     else if(road[y]=='Z'){
                        mySet.insert(0);
                        break;
               }
           }}
        else if(road[x]=='Z'){
            mySet.insert(0);;
            break;
        }
       }
    cout<<*mySet.begin()<<endl;
   }

   return 0;
}
