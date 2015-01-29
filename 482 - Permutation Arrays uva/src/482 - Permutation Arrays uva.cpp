#include <iostream>
#include <map>
#include <math.h>
#include <stdlib.h>
#include <stdio.h>
#include <string>
#include <stack>
#include <iterator>
#include <sstream>
using namespace std;

int main(){
string index,parmut,fs,sd;
int T;
cin>>T;
cin.ignore();
for(int Case=1;Case<=T;Case++){
    cin.ignore();
    getline(cin,index);
    getline(cin,parmut);
    map<double , string> mymap;
    stack<double> myst;
    stack<string> mysT;

    stringstream ss(index);
    double a;
    while(ss>>a){
        myst.push(a);
    }
    string FF;
    for(int x=0;x<parmut.size();x++){
      if(parmut[x]!= ' '){
      FF+=parmut[x];
      }
      else{
      mysT.push(FF);
      FF="";
      }
    }
    mysT.push(FF);
      FF="";
    while(!myst.empty()){

    mymap[myst.top()]=mysT.top();
    myst.pop();
    mysT.pop();
}
map<double , string>::iterator it;

for(it=mymap.begin();it!=mymap.end();it++){

    cout<<it->second<<endl;
}
if(Case!=T)
    cout << endl;
}


   return 0;
}
