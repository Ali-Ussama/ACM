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
using namespace std;
typedef long long ll;

int main(){
	int n, Domino_counter = 0 , count = 0;
	char back_push = 'N';
	string str;

		cin >> n >> str;
		for (int x = 0; x < n; x++){
			if (str[x] == '.'){
				count++;
				if (x == n - 1 && back_push != 'R'){
					Domino_counter += count;
				}
			}
			else if (str[x] == 'L'){

				if (x > 0 && str[x - 1] == '.' && back_push == 'R'){
					if (count & 1){
						Domino_counter++;
					}
				}
				count = 0;
				back_push = 'L';
			}
			else if (str[x] == 'R'){
				if (x > 0 && str[x-1] == '.' && (back_push == 'N' | back_push == 'L' )){
					Domino_counter += count;
				}
				count = 0;
				back_push = 'R';
			}
		}
		cout << Domino_counter << endl;


		system("pause");
	return 0;
}
