#include <iostream>
#include <string>
#include <algorithm>
#include <sstream>
#include <fstream>
#include <stdio.h>
using namespace std;

int main(){
        ofstream Myfile;
        Myfile.open("D:\Work\ACM\Cooking the Books.txt");
        freopen("lol","rt",stdin);
       string str ;
       int Min , Max , T;

        cin >> T;
            for( int z = 1 ; z <= T; z++ ){
                cin >> str;
                Min = str[0] - '0';
                Max = str[0] - '0';

                int ID_MAX = 0 ,ID_MIN = 0;

                string MIN = str , MAX = str;

                    for( int x = 0 ; x < str.size() ; x++){
                        if(Min > (str[x] - '0')){
                            Min = (str[x] - '0');
                            ID_MIN = x;
                        }
                        if(Max < (str[x] - '0')){
                            Max = (str[x] - '0');
                            ID_MAX = x;
                        }
                    }
                    cout << "Case #"<< z << ": ";
                    Myfile << "Case #"<< z << ": ";
                   if(Min != 0){
                        ostringstream ss;
                        ss << Min;
                        string A = ss.str();
                        MIN[ID_MIN] = A[0];
                        swap(MIN[0],MIN[ID_MIN]);
                        cout << MIN << " ";
                        Myfile << MIN << " ";
                   }else{
                        cout << MIN << " ";
                        Myfile << MIN << " ";
                   }
                   if(Max != 0){
                        ostringstream s;
                        s << Max;
                        string A = s.str();

                        MAX[ID_MAX] = A[0];

                        swap(MAX[0],MAX[ID_MAX]);

                        cout << MAX << endl;
                        Myfile << MAX << endl;
                   }else{
                        cout << MAX << endl;
                        Myfile << MAX << endl;
                   }

                }
                Myfile.close();


    return 0;
}
