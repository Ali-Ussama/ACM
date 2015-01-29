#include <iostream>
#include <math.h>
using namespace std;
int main(){
long long x,n,T;
cin>>T;
for(long long Case=1;Case<=T;Case++){
cin>>x;
n=(-1+sqrt(1+8*x))/2;
cout<<n<<endl;
}
   return 0;
}
