#include <iostream>
using namespace std;
int main()
{
    long long z,i,j;
    while(cin>>i>>j){
    int a=0;
    if(i > j)
        swap(i,j);
    for(z=i;z<=j;z++){
        long x = z , s = 1 ;
       while(x > 0){
        if( x == 1 )
            break;
        if(x % 2 != 0)
            x = ( 3 * x ) + 1;
        else if( x % 2 == 0 )
            x = x / 2;
        s++;
        }if(s > a )
        a = s;
    }
    cout << i << " " << j << " " << a << endl;
    }
    return 0;
}
