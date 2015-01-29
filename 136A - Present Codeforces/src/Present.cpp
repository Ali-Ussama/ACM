#include <bits/stdc++.h>
using namespace std;

int main()
{
	vector<int> v1;
	int arr[101];
	int n, var;
	cin >> n;
	for (int i = 0; i < n; i++){
		cin >> var;
		v1.push_back(var);
	}
	for (int z = 0; z < n; z++){

		arr[v1[z] - 1] = z;

	}
	for (int z = 0; z < n; z++){
		cout << arr[z] + 1 << " ";
	}





	return 0;
}
