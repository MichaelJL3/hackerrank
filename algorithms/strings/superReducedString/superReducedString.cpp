
/*
	SOLVED: September 2016

	Modified: 12/25/2016
*/

#include <cstdio>
#include <iostream>

using namespace std;

int main(){
	string s="";
	string s1="";
	int size=0;
	int offset=0;

	cin>>s;
	size=s.length()-1;

	for(int i=0; i+offset<size; i++){
		if(s[i]==s[i+1+offset]){
			s[i]=s[i+2+offset];
			offset+=2;
			i--;
			if(i>-1)
				i--;
		}else
			s[i+1]=s[i+1+offset];
	}

	if(offset)
		offset--;

	s1=s.substr(0, size-offset);
	if(s1.length())
		cout<<s1<<"\n";
	else
		puts("Empty String");

	return 0;
}
