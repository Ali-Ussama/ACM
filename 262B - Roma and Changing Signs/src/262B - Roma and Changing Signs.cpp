#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){

    long long n,k,sum=0,v,count=0,f;
    bool positive=true;
   vector<long long> vec;
   cin>>n>>k;
   f=k;
   for(long long index=0;index<n;index++){
    cin>>v;
    if(f>0 && v<0){
        positive=false;
        count++;
        v*=-1;
    f--;
    }
    vec.push_back(v);
    sum+=v;
   }
   sort(vec.begin(),vec.end());
       if((k-count)%2!=0 ){
           v=vec[0];
           v*=-1;
           v*=2;
           sum+=v;
           cout<<sum;
       }
       else if ((k-count)%2==0 ){
           cout<<sum;
       }

   return 0;
}
