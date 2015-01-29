#include<iostream>
#include <string>
#include <stdio.h>
using namespace std;

int main() {

	int count,T=1;
	string set;
	while(cin>>set){
	if(set[0]=='-'){
		break;
	}
	count=0;
	for(int x=0;x<set.size();x++){
	if(set[x]=='{' && set[x+1]=='}'){
		set.erase(x,2);
}
		while( set[x-1]=='{' && set[x]=='}' ){
		set.erase(x-1,2);
		}

		}
	for(int x=0;x<set.size();x++){
		if(set[x]=='{' && set[x+1]=='}'){
		set.erase(x,2);
	}
    else if((set[x]=='{' && set[x+1]=='{')){
		set.erase(x,2);
		count++;
	}
	else if((set[x]=='}' && set[x+1]=='}')){
		set.erase(x,2);
		count++;
	}
	else if((set[x]=='}' && set[x+1]=='{')){
		set.erase(x,2);
		count+=2;
	}
		}
		cout<<T<<". "<<count<<endl;
		T++;
		}

return 0;

}
