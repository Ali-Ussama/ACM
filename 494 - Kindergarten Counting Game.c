#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<set>
#include <string>
#include <ctype.h>
#include <stdio.h>
using namespace std;
int main()
 {
     //freopen("input.txt","rt",stdin);
     string words;
     int word_counter;
	 while (getline(cin,words))
	 {
		 word_counter=0;
		 for (int i = 0; i < words.size(); i++)
            {
				 if (isalpha(words[i]) && !isalpha(words[i+1]) && i < words.size())
                    word_counter++;
                else if (isalpha(words[i]) && i == words.size()-1)
                    word_counter++;
		 }
	 cout<<word_counter<<endl;
		 	 }


	 return 0;
}
