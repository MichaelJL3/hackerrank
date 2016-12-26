
/*
	SOLVED: July 2016

	Modified: 12/25/2016
*/

#include <cstdio>
#include <iostream>

using namespace std;

int main(){
	string tmp;
	string str;
	int chars[26];
	int length=0;
	char c=0;

	while(cin>>tmp)
		str+=tmp;

	for(int i=0; i<26; i++){
		chars[i]=0;
	}

	length=str.length();
	for(int i=0; i<length; i++){
		c=str[i];
		if(c>64&&c<91)
			chars[(c-65)]=1;
		else if(c>96&&c<123)
			chars[(c-97)]=1;
	}
	
	for(int i=0; i<26; i++){
		if(!chars[i]){
			puts("not pangram");
			return 0;
		}
	}

	puts("pangram");

	return 0;
}
