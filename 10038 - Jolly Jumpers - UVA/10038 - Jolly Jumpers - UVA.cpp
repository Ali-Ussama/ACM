#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <set>
#include <stack>
#include <string>
#include <queue>
#include <sstream>
using namespace std;

void Jolly(vector<int>& v,int N){
    bool check = false;
        for(int x = 1 ; x < N ; x++){
            check = false;
            for(int z = 0 ; z < N-1 ; z++){
                if(x == v[z]){
                    check = true ;
                    break;
                }
            }
            if(check == false){
                cout<<"Not jolly\n";
                return;
            }

        }
        cout<<"Jolly"<<endl;


}

int main(){

long long N , var;
    while(cin >> N ){
        vector<int> v;
        vector<int> V;

        for(int x = 0 ; x < N ; x++){
            cin>> var;
            v.push_back(var);
        }
            if(N > 1){
                for(int x = 0 ; x < N-1 ; x++){
                       V.push_back(abs(v[x]-v[x+1]));

                }

                Jolly(V,N);
            }
            else
                    cout<<"Jolly"<<endl;

    }

return 0;
}
