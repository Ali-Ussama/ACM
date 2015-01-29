#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
using namespace std;

int main(){

    long long x , y , t;
    vector<long long> axis_x;
    vector<long long> axis_y;
        cin >> t;
            for(long long L = 0 ; L < t; L++){
                cin >> x >> y;

                axis_x.push_back(x);
                axis_y.push_back(y);
            }

            sort(axis_x.begin(),axis_x.end());
            sort(axis_y.begin(),axis_y.end());

               long long low_x = axis_x[0],
               high_x = axis_x[axis_x.size()-1],
               low_y = axis_y[0],
               high_y = axis_y[axis_y.size()-1];

             long long X , Y;

             if(low_x >= 0 && high_x >= 0)
                    X = abs(high_x - low_x);
             else if(low_x < 0 && high_x >= 0)
                    X = abs(low_x) + high_x;
            else if(low_x >= 0 && high_x < 0)
                    X = low_x + abs(high_x);
            else
                    X = abs(abs(low_x) - abs(high_x));

             if(low_y >= 0 && high_y >= 0)
                Y = abs(high_y - low_y);
             else if(low_y < 0 && high_y >= 0)
                    Y = abs(low_y) + high_y;
                else if(low_y >= 0 && high_y < 0)
                    Y = low_y + abs(high_y);
                else {
                    Y = abs(abs(low_y) - abs(high_y));
                }


             if( X > Y)
                cout << X * X;
             else
                cout << Y * Y;


    return 0;
}
