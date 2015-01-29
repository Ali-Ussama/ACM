#include <iostream>
#include <vector>
#include <stdio.h>
#include <algorithm>
using namespace std;
int main(){
    int n, var;
    vector<int> v;

	while(cin >> n && n!= 0){

	bool C = false;

	for (int x = 0; x < n; x++){

		cin >> var;
		v.push_back(var);

	}
	sort(v.begin(),v.end());

	for (int x = 0; x < n-1; x++){
		if( abs(v[x] - v[x + 1]) <= 200 ){
			C = true;

		}
		else{
			C = false;
			cout <<"IMPOSSIBLE\n";
			break;
		}
	}
	if (C == true){
		if(1422-v[n-1]<=100 && 1422-v[n-1]>=0){
		cout <<"POSSIBLE\n";
	}
	else{
		cout <<"IMPOSSIBLE\n";
	}

	}

	v.clear();
}




	return 0;
}
