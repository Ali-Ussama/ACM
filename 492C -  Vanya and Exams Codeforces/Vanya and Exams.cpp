#include <iostream>
#include <vector>
#include <algorithm>
#include <stdio.h>
#include <map>
#include <utility>
using namespace std;

int main(){

        long long n , r , avg ;
        long double Avg , var1 , var2 , sum = 0;
            cin >> n >> r >> avg;
            pair<long long,long long> grds[100009] ;
                for(int x = 0 ; x < n ; x++){
                    cin >> var1 >> var2;
                    grds[x] = make_pair(var2,var1);
                    sum += var1;
                }
                Avg = sum /n;
                long long res = avg * n ;

                long long Count = 0;
                sort(grds,grds+n);


                for(long long x = 0 ; x < n ; x++){
                        if(sum >= res)
                            break;
                        if(grds[x].first < r)
                            if((r-grds[x].second) > 0){
                                   if( (r-grds[x].second) > (res - sum) ){

                                        Count += (grds[x].first*(res - sum));
                                          sum = res;
                                    }
                                    else{
                                        sum += (r-grds[x].second);
                                        Count += (grds[x].first*(r-grds[x].second));
                                    }
                            }
                    }
               cout << Count << endl;

    return 0;

}
