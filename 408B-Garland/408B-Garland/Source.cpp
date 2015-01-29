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
#include <iterator>
using namespace std;
typedef long long ll;
map<char, int > N;
map<char, int> M;

int main(){
	string str;
	cin >> str;
	for (int x = 0; x < str.size(); x++)
		N[str[x]]++;
	cin >> str;
	for (int x = 0; x < str.size(); x++)
		M[str[x]]++;

	int Count = 0;

	for (map<char, int>::iterator it = M.begin(); it != M.end(); it++){
		if (N[it->first] == 0){
			Count = 0;
			break;
		}
		else if (N[it->first] > it->second)
			Count += it->second;
		else
			Count += N[it->first];
	}
	if (Count == 0)
		cout << "-1";
	else
		cout << Count;

	system("pause");
	return 0;

}
