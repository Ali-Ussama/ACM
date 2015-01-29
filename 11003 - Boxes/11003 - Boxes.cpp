#include <iostream>
#include <algorithm>
#include <sstream>
#include <vector>
#include <stdio.h>
#include <cmath>
#include <math.h>
using namespace std;
vector<long long> N;

long long Binary_Search(long long Key,char A){
    long long low = 0,
    high = N.size() - 1,
     mid;
    while(low <= high){
        mid = (low + (high - low + 1)/2 ) ;
        if(Key == N[mid])
                return mid;
        else if(Key < N[mid]){
            high = mid - 1;
        }else
            low = mid + 1;
    }
    if(A == 'B')
        return high;
    else
        return low;
}
long long NOD(long long z){
    long long numberOfDivisors = 1;

  for (long long i = 2; i <= z; i++)
  {
    long long exponent = 0;
    while (z % i == 0) {
        exponent++;
        z /= i;
    }
    numberOfDivisors *= (exponent+1);
  }
  return numberOfDivisors;
}
int main () {
   // freopen("c.txt","w",stdout);
    N.push_back(1);
    for(long long x = 0; x < 500000; x++){
        N.push_back(N[x] + NOD(N[x]));
       // cout << N[x] << endl;
        if(N[x] >= 1000000)
            break;
    }
    long long T , A , B;
        cin >> T;
        for(long long Case = 1 ; Case <= T; Case++){
            cin >> A >> B;
            long long index = (Binary_Search(B,'B') - Binary_Search(A,'A') + 1);
            cout << "Case " << Case <<": " << index << endl ;
        }

  return 0;
}
