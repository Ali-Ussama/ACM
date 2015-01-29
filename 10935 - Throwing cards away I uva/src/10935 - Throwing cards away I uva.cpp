#include <iostream>
#include <vector>
#include <queue>
#include <stdio.h>
using namespace std;
int main()
{
    freopen("Throwing","rt",stdin);
   int deck;
   while(cin>>deck){
       if(deck==0)
       break;
   	vector<int> vec;
   	for(int x=1;x<=deck;x++){
   		vec.push_back(x);
   	}
if(deck>1){
   	queue<int> Qu;
   	while(vec.size()>=2){
   		Qu.push( vec.front());
   		vec.erase(vec.begin());
   		vec.push_back(vec.front());
   		vec.erase(vec.begin());
   	}
   	cout<<"Discarded cards: ";
   	cout<<Qu.front();
   		Qu.pop();
   	while(!Qu.empty()){
   		cout<<", "<<Qu.front();
   		Qu.pop();
   	}
   	cout<<endl<<"Remaining card: "<<vec.front()<<endl;
   }
   else if (deck==1){
       cout<<"Discarded cards:"<<endl;
       cout<<"Remaining card: 1"<<endl;
   }
   }
   return 0;
}
