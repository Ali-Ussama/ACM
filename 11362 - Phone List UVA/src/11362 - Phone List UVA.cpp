#include<iostream>
#include <map>
#include <vector>
#include <algorithm>
#include <iterator>
#include <stdio.h>
using namespace std;
int main(){
     int T;
    cin>>T;
    for(int Case=1;Case<=T;Case++){
    int n;
    cin>>n;

    vector<string> vec;

    for(long x=0;x<n;x++){

       string var;
       cin>>var;
       vec.push_back(var);
    }
    sort(vec.begin(),vec.begin()+n);
     string s1,s2;

     bool check=false;

    for(long f=0;f<n-1;f++){
    	s1=vec[f];s2=vec[f+1];
        //cout<<"S1 "<<s1<<" S2 "<<s2<<endl;
    	for(long index=0;index<s1.size();index++){
    		if(s1[index]==s2[index]){
    			check=true;
    		}
    		else{
    			check=false;
    			break;
    		}
    	}
    	if(check==true){
    	cout<<"NO\n";
        break;
    }
    }
    if(check==false){
    	cout<<"YES\n";
    }
    }
    return 0;
}






