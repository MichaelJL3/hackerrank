
/*
	SOLVED: July 2016

	Modified: 12/25/2016
*/

#include <iostream>
#include <cstdio>

using namespace std;

int anagram(string s, int len);

int main(){
	string str;
	int iter=0;

	scanf("%d", &iter);

	for(int i=0; i<iter; i++){
		cin>>str;
		printf("%d\n", anagram(str, str.length()-1));
	}

	return 0;
}

int anagram(string s, int len){
	int changes=0;
	int diff=0;

	for(int i=0, j=len; i<j; i++, j--){
		diff=s[j]-s[i];
		if(diff<0)
			diff*=-1;
		if(diff)
			changes+=diff;
	}

	return changes;
}