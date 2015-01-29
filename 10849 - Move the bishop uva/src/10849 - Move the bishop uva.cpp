#include <iostream>
#include <cmath>
#include <stdio.h>
using namespace std;
int main(){
   long long N,T,C,r1,c1,r2,c2;
   cin>>C;
   for(long Case=1;Case<=C;Case++){
       cin>>T>>N;
   	for(long SS=1;SS<=T;SS++){
   		cin>>r1>>c1>>r2>>c2;
        if(r1==r2 && c1==c2){
              cout<<"0\n";
          }
            else if(((r1+c1)%2==0 && (r2+c2)%2!=0)|| ((r1+c1)%2!=0 && (r2+c2)%2==0)){
   			cout<<"no move\n";
   		}
   		else if(abs(r1-r2)==abs(c1-c2)){
   			cout<<"1\n";
   		}
   		else{
               cout<<"2\n";
   		}
   	}
   }

         return 0;
         }
