#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <map>
#include <math.h>
#include <cmath>
#include <stack>
#include <queue>
#include <iomanip>
#include <sstream>
#include <utility> 
using namespace std;
typedef long long ll;
vector<ll> v;
vector<ll> vec;

vector<pair < ll, vector<ll> > > Pair;
void P(int sum ){
	Pair.push_back(make_pair(sum, vec));
}
int F(ll sum, int index, int key){
	if ( sum == key || index == v.size() )
		return sum;

	else if (v[index] + sum <= key){
		vec.push_back(v[index]);
		F(sum + v[index], index + 1, key);
	}
	else
		F(sum , index + 1, key);

}
int main(){
	ll n, t , var;
		 
	cin >> n >> t;
			for (int x = 0; x < t; x++){
				cin >> var;
				v.push_back(var);
			}
			for (int x = 0; x < t; x++){
				vec.clear();
				P(F(v[x], x , n));
				
			}
			for (int x = 0; x < Pair.size(); x++){
				cout << Pair[x].first << " ";
					for (int y = 0; y < Pair[x].second.size(); y++)
						cout << Pair[x].second[y] << " - ";
				cout << endl;
			}

	system("pause");
	return 0;
}