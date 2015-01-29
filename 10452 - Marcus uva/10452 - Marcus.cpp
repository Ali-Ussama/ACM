#include <iostream>
#include <vector>
#include <algorithm>
#include <stdio.h>
using namespace std;
vector<string> v;
vector<string> dir;
string S= "IEHOVA";
int row ,col,index=0,step = -1;
bool check = true;

bool valid(int r , int c ){
    if( r >=0 && r < row && c >=0 && c < col )
        return true;
    else
        return false;
}
void path(int r,int c,string D){
    if(!valid(r,c) || check == false ){
            return;
    }else{
            if(v[r][c] == '#'){
                dir.push_back(D);
                check = false;
                return;
            }
            else if(v[r][c] == S[index]){
                index++;
                dir.push_back(D);
            }else{
                if(step != -1)
                    return;
            }
                step = 0;
                    path(r-1,c,"forth");
                    path(r,c-1,"left");
                    path(r,c+1,"right");
    }
}
int main(){
    long long T;
    string str;
    cin >> T;
        for(int Case = 0; Case < T; Case++){
            cin >> row >> col;

        for(int y = 0 ; y < row ; y++){
            cin >> str;
            v.push_back(str);
        }
            for(int x = 0 ; x < col ; x++){
                if(v[row-1][x] == '@'){
                    path(row-1,x,"");
                    break;
                }
            }
            for(int x = 0 ; x < dir.size() ; x++){
                    if( x != dir.size()-1 )
                        cout << dir[x] << " ";
                    else
                        cout << dir[x] << endl;
            }

            dir.clear(); v.clear(); index = 0; check = true; step = -1;
    }
    return 0;
}
