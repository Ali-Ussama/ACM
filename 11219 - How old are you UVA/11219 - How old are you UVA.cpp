#include <iostream>
#include <math.h>
#include <stdio.h>
#include <vector>
#include <stack>
#include <map>
#include <algorithm>
#include <set>
#include <sstream>
#include <iomanip>
#include <string>
#include <queue>
using namespace std;
vector<string> state;
vector<string> vi;
long long R , C;
map<char ,int> Map;


int main(){

    //freopen("11219 - How old are you UVA","rt",stdin);
        int D , d , M , m , Y , y, T;
        char c;
        string str;
    cin >> T;

            for(int x = 1 ; x <= T; x++){

                cin >> D >> c >> M >> c >> Y;
                cin >> d >> c >> m >> c >> y;

                    cout << "Case #"<<x<<": ";

                    D += (M*30) + (Y * 30 * 12);
                    d += (m*30) + (y * 30 * 12);
                    D -= d;
                    d = D;
                    d = (d / 12)/30;
                    if( D < 0){
                        cout << "Invalid birth date\n";
                    }else{
                        if(d > 130)
                            cout << "Check birth date\n";
                        else
                            cout << D/12/30 << endl;
                    }
                    }



    return 0;
}
