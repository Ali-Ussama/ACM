#include <iostream>
#include <stdio.h>
#include <string>
#include<algorithm>
#include<ctype.h>
using namespace std;
int main(){
	freopen("Football","rt",stdin);
  string s;
   while(cin>>s){
      long long count=1;
      for(int x=0;x<s.size();x++){

		  if(s[x]==s[x+1]){
		  	count++;
		  	if(count==7){
		  		break;
		  	}
		  }
		  else{
		  	count=1;
		  }
      }
	  if(count==7){
	  	cout<<"YES\n";
	  }
	  else
	  cout<<"NO\n";
   }
return 0;
}
