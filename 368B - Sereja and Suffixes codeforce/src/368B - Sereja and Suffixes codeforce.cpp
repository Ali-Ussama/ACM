#include<iostream>
#include<map>
using namespace std;
int main(){
    long input[100000],n,m,var,remain[100000];
    cin>>n>>m;
    for(int k=0;k<n;k++){
        cin>>input[k];
    }
    map<long,long>MyMap;
    for(int i=n-1;i>=0;i--){
        MyMap[input[i]]++;
        remain[i]=MyMap.size();
    }
    for(int k=0;k<m;k++){
        cin>>var;
        cout<<remain[var-1]<<endl;
    }
    return 0;
}
