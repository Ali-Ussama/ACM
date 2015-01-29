#include <iostream>
#include <vector>
#include <stack>
#include <algorithm>
#include <iterator>
#include <stdio.h>
using namespace std;
int main()
{
	freopen("Chores","rt",stdin);
long n,a,b,input;
vector<long> vec;
cin>>n>>a>>b;
for(long x=1;x<=n;x++){
    cin>>input;
    vec.push_back(input);
}
    sort(vec.begin(),vec.end());
    input=vec[b]-vec[b-1];
    cout<<input;
   return 0;
}
