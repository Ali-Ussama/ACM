#include <iostream>
#include <stdio.h>
using namespace std;
int main(){
    freopen("3n+1","rt",stdin);
long long i,j,res,comp=0,count;
while(cin>>i>>j){
    if(i>j){
        cout<<i<<" "<<j<<" ";
        swap(j,i);
    }
    else{
        cout<<i<<" "<<j<<" ";
    }
    for(long long x=i;x<=j;x++){
        res=x;
        count=0;
        while(true){
            count++;
            if(res==1){
                break;
            }
            else if(res%2==0){
                res/=2;
            }
            else if(res%2!=0){
                res=(3*res)+1;
            }
        }
        if(comp<count){
        comp=count;
        }
    }

    cout<<comp<<endl;
    comp=0;

}
   return 0;
}
