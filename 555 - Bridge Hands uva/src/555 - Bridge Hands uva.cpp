#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
using namespace std;

struct card{
	char rank;
	char num;
};
map<char,int>rankmap;
map<char,int>nummap;
bool order(card a,card b){
	if(rankmap[a.rank] > rankmap[b.rank]){
		return false;
	}else if(rankmap[a.rank] < rankmap[b.rank]){
		return true;
	}else{
		if(nummap[a.num] > nummap[b.num]){
			return false;
		}
	}
	return true;
}

int main() {
	rankmap['C']=0;	rankmap['D']=1;	rankmap['S']=2;	rankmap['H']=3;
	nummap['2']=1;nummap['3']=2;nummap['4']=3;nummap['5']=4;nummap['6']=5;
	nummap['7']=6;nummap['8']=7;nummap['9']=8;nummap['T']=9;nummap['J']=10;
	nummap['Q']=11;nummap['K']=12;nummap['A']=13;
	while(1){
		char start_p;
		cin >> start_p;
		if(start_p=='#') break;
		cin.ignore();
		string l1,l2;
		getline(cin,l1);
		getline(cin,l2);
		vector <card> p1,p2,p3,p4;
		l1+=l2;
		card c;
		for(int x=0;x<l1.size();){
			c.rank = l1[x++];
			c.num = l1[x++];
			p1.push_back(c);
			c.rank = l1[x++];
			c.num = l1[x++];
			p2.push_back(c);
			c.rank = l1[x++];
			c.num = l1[x++];
			p3.push_back(c);
			c.rank = l1[x++];
			c.num = l1[x++];
			p4.push_back(c);
		}
		sort(p1.begin(),p1.end(),order);
		sort(p2.begin(),p2.end(),order);
		sort(p3.begin(),p3.end(),order);
		sort(p4.begin(),p4.end(),order);
		map<char,int>m;
		m['S']=0;m['N']=2;
		m['W']=1;m['E']=3;
		map< int , vector<card> > mm;
		mm[0]=p1;mm[2]=p3;
		mm[1]=p2;mm[3]=p4;
		mm[4]=p1;mm[6]=p3;
		mm[5]=p2;mm[7]=p4;
		mm[8]=p1;mm[9]=p2;
		mm[10]=p3;mm[11]=p4;
		char p[] = {'S','W','N','E'};
		//cout << mm[ m[start_p] ];
		int h = m[start_p]+1;
		int g = h;
		int w = 0;
		for(int x=h;x<h+4;x++){
			mm[x] = mm[8+w];w++;
		}
		w=0;
		while(g--){
			mm[w]=mm[w+4];
			w++;
		}
		for(int x = 0 ; x < 4 ; ++x){
			vector <card> vv = mm[x];
			cout << p[x]<<":";
			for (int i = 0; i < 13 ; ++i) {
				card ca = vv[i];
				cout <<" "<<ca.rank<<ca.num;
			}
			cout << endl;
		}
	}
	return 0;
}
