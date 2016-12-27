
/*
	SOLVED: August 2016

	Modified: 12/26/2016
*/

#include <cstdio>
#include <iostream> 

#define LETR 97

using namespace std;

int main(){
	string s;
	int size=0;
	int indx=0;
	int curr=0;
	int set[26];
	bool fnd=false;

	for(int i=0; i<26; i++)
		set[i]=0;

	cin>>s;
	size=s.length();

	for(int i=0; i<size; i++){
		indx=s[i]-LETR;
		set[indx]++;
	}

	for(int i=0; i<26; i++){
		curr=set[i];
		if(curr&&curr%2){
			if(!fnd)
				fnd=true;
			else{
				puts("NO");
				return 0;
			}
		}
	}
	
	puts("YES");
	return 0;
}