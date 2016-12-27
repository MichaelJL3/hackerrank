
/*
	SOLVED: August 2016

	Modified: 12/26/2016
*/

#include <cstdio>
#include <iostream>

#define LETR 97

using namespace std;

int absol(int n);

int main(){
	string s1="";
	string s2="";
	int set1[26];
	int set2[26];
	int diff=0;
	int indx=0;
	int sz=0;

	for(int i=0; i<26; i++){
		set1[i]=0;
		set2[i]=0;
	}

	cin>>s1>>s2;

	sz=s1.length();
	for(int i=0; i<sz; i++){
		indx=s1[i]-LETR;
		set1[indx]++;
	}

	sz=s2.length();
	for(int i=0; i<sz; i++){
		indx=s2[i]-LETR;
		set2[indx]++;
	}

	for(int i=0; i<26; i++)
		diff+=absol(set1[i]-set2[i]);

	printf("%d\n", diff);
	return 0;
}

int absol(int n){
	return (n<0?n*-1:n);
}