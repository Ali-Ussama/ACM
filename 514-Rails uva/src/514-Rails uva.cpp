#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<set>
#include<queue>
#include<stack>
#include<map>
#include<sstream>
#include <ctype.h>
#include<stdio.h>
#include<math.h>
#include<iomanip>
#include<sstream>
#include <cstdlib>
using namespace std;
vector<int> v;
vector<int> V;
map<long long, long long> m;
set<int> s;
queue<int> Q;
long long var = 0;
string str;
string str1;


int main(){
	long long T,Count=0;
	while (cin >> T ){
		if(T==0)break;

		if(Count>0)
		cout<<endl;

		while (true){
			bool C = false;
			int count = 0;
			for (int x = 0; x < T; x++){
				cin >> var;

				if (var == 0 && x == 0){
					C = true;
					break;
				}

				v.push_back(var);
			}
			if (C == true){
				break;
			}
			if (T == 1)
				cout << "Yes" << endl;
			else if (T >= 2){

				if (v[0] < v[1]){

					for (int x = 0; x < T-1; x++){
						if (v[x] < v[x + 1]){
							count++;
						}
					}
					if (count == T - 1)
						cout << "Yes\n";
					else
						cout << "No\n";
				}
				else if (v[0]>v[1]){
					for (int x = 0; x < T - 1; x++){
						if (v[x] > v[x + 1]){
							count++;
						}
					}
					if (count == T - 1)
						cout << "Yes\n";
					else
						cout << "No\n";
				}
			}
			v.clear();
		}
		Count=1;
	}
	return 0;
}
