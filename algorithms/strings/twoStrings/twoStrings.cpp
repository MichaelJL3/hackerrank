
/*
	SOLVED: July 2016

	Modified: 12/26/2016
*/

#include <cstdio>
#include <iostream>

using namespace std;

int substr(string s1, string s2);

int main(){
	int iter;
	string str1;
	string str2;

	scanf("%d", &iter);

	for(int i=0; i<iter; i++){
		cin>>str1;
		cin>>str2;

		if(substr(str1, str2))
			puts("YES");
		else
			puts("NO");
	}

	return 0;
}

int substr(string s1, string s2){
	int set1[26];
	int set2[26];
	int len1=s1.length();
	int len2=s2.length();
	int i=0, j=0;

	for(int k=0; k<26; k++){
		set1[k]=0;
		set2[k]=0;
	}

	while(i<len1&&j<len2){
		if(i<len1){
			set1[s1[i]-97]++;
			i++;
		}
		if(j<len2){
			set2[s2[i]-97]++;
			j++;
		}
	}

	for(int k=0; k<26; k++){
		if(set1[k]&&set2[k])
			return 1;
	}

	return 0;
}