#include <iostream>
#include <algorithm>
#include <sstream>
#include <vector>
#include <stdio.h>
using namespace std;
vector<long long> vec;
long long F(string s){
    istringstream ss;
    ss.str(s);
    long long x;
    ss >> x;
    return x;
}

void convert(string arr[]){
    string str;
    for(int x = 0 ; x < 4 ; x++){
        str = arr[x];
            do {
                vec.push_back(F(str));
          } while ( next_permutation(str.begin(),str.end()) );
}
str = arr[4];
vec.push_back(F(str));
}
int main () {
  string arr[] = {"47","4477" , "444777" , "44447777" ,"4444477777"} ;
  convert(arr);
    long long in ;
        cin >> in;
        for(int x = 0 ; x < vec.size() ; x++){
            if(vec[x] >= in){
                cout << vec[x];
                break;
            }
        }
  return 0;
}
