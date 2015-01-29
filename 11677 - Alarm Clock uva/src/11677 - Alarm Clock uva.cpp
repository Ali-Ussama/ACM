#include<iostream>
#include <stdio.h>
using namespace std;
int main(){
    freopen("Alarm","rt",stdin);
int a,b;
int z,m,m1,h,h1;
while(cin>>m>>h>>m1>>h1){
if(m==0 && h==0 && m1==0 && h1==0)
break;
a=(m*60)+h;
b=(m1*60)+h1;
if(a>b){
cout<<(z=b-a)+1440<<endl;
}
else if(a>12||b>12){
a=a-12;
b=b-12;
cout<<(z=b-a)<<endl;
}
}
return 0;
}
