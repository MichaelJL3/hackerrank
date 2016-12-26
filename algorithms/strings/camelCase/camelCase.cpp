
/*
	SOLVED: August 2016

	Modified: 12/25/2016
*/

#include <cstdio>
#include <iostream>

#define MIN 65
#define MAX 90

using namespace std;

int main(){
	string msg="";
	int size=0;
	int count=1;
	char c;

	cin>>msg;
	size=msg.length();

	for(int i=0; i<size; i++){
		c=msg[i];
		if(c>=MIN&&c<=MAX)
			count++;
	}

	printf("%d\n", count);
}