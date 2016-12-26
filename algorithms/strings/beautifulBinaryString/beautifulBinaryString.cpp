
/*
	SOLVED: August 2016

	Modified: 12/25/2016
*/

#include <cstdio>
#include <iostream>

using namespace std;

int main(){
	string s="";
	int size;
	int change=0;

	scanf("%d", &size);
	
	cin>>s;
	size--;

	for(int i=1; i<size; i++){
		if(s[i]=='1'&&s[i-1]=='0'&&s[i+1]=='0'){
			s[i+1]='1';
			i++;
			change++;
		}
	}

	printf("%d\n", change);

	return 0;
}
