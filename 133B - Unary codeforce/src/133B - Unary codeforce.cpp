#include <iostream>
#include <map>
#include <iterator>
#include <stdio.h>
#include <algorithm>
#include <cmath>
using namespace std;
int Pow(long s){
    long sum=1;
 for(int x=0;x<s;x++){
     sum=(sum*2)%1000003;
 }
 return sum;
}
int main()
{
  map<char,string> myMap;
  map<char,string>::iterator it=myMap.begin();
  myMap['>']="1000";
  myMap['<']="1001";
  myMap['+']="1010";
  myMap['-']="1011";
  myMap['.']="1100";
  myMap[',']="1101";
  myMap['[']="1110";
  myMap[']']="1111";

  string input,sort;
  long long total=0;
  cin>>input;
  for(long x=0;x<input.size();x++){
      sort+=myMap[input[x]];
  }
  reverse(sort.begin(),sort.end());
  for(long z=0;z<sort.size();z++){
      if(sort[z]=='1'){
          total+=Pow(z);
      }
  }
   cout<<total%1000003<<endl;
   return 0;
}
