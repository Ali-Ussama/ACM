#include <iostream>
#include <algorithm>
#include <sstream>
#include <vector>
#include <stdio.h>
#include <cmath>
#include <math.h>
typedef long long ll;
using namespace std;

int main(){

    ll a , b , c , d;
        cin >> a >> b >> c >> d;
            if(a == b){
                cout <<( abs(c-d) ) << "/" << max(c,d) ;
            }else{
                c += min(abs(a-c),abs(b-d));
                d += min(abs(a-c),abs(b-d));
                if( a == c ){
                    cout << abs(d-b) << "/" << max(b,d) ;
                }
                else if(b == d ){
                    cout << abs(a-c) << "/" << max(a,c) ;
                }
            }




    return 0;
}
