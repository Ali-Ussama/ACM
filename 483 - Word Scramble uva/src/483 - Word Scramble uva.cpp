#include <iostream>
#include <stdio.h>
#include <string>
#include<algorithm>
#include<ctype.h>
using namespace std;
int main(){
    freopen("Word","rt",stdin);
  string s;
   while(getline(cin , s))
   {
       string str;

       for(int i=0 ; i< s.size() ;i++)
       {
           if(s[i]!=' ')
           {
               str+=s[i];
           }
           else
            {
                reverse(str.begin(),str.end());
                cout<<str<<' ';
               str="";
            }
       }
       reverse(str.begin() , str.end());
       cout<<str<<endl;
       str=" ";
   }


   return 0;
}
