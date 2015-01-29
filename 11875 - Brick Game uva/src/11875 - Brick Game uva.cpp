#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
int T;
cin>>T;
for(int x=1;x<=T;x++){
    int N;
    vector<int> vec;
    cin>>N;
    for(int z=1;z<=N;z++){
        int var;
        cin>>var;
        vec.push_back(var);
    }
    sort(vec.begin(),vec.end());
    cout<<"Case "<<x<<": "<<vec[(N/2)]<<endl;
}
return 0;}
