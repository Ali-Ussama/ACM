#include<iostream>
using namespace std;
int main(){
    long N;
	while(cin>>N){
        if(N<0)
        break;
        else
		N=((N*(N+1))/2)+1;
        cout<<N<<endl;
	}
	return 0;
}
