
/*
	SOLVED: July 2016

	Modified: 12/25/2016
*/

#include <cstdio>
#include <iostream>

using namespace std;

int main(){
	string next;
	int iter, cuts, length;
	char last;

	scanf("%d", &iter);

	for(int i=0; i<iter; i++){
		cin>>next;
		cuts=0;
		length=next.length();

		last=next[0];
		for(int j=1; j<length; j++){
			if(next[j]==last)
				cuts++;
			else
				last=next[j];
		}

		printf("%d\n", cuts);
	}

	return 0;
}