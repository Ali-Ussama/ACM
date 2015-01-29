#include <iostream>
#include <ctype.h>
#include <stdio.h>
#include <string>
using namespace std;
int main()
{
    string F,S;
    cin>>F>>S;
    for(int x=0;x<F.size();x++){
        F[x]=tolower(F[x]);
        S[x]=tolower(S[x]);

    }
    if(F==S){
        cout<<"0";
    }
    if(F>S){
        cout<<"1";
    }
    if(F<S){
        cout<<"-1";

    }
   return 0;
}
