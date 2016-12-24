
/*
	SOLVED: August 2016

	Modified: 12/24/2016
*/

#include <cstdio>
#include <string>
#include <iostream>

using namespace std;

void holes(char** c, int n, int pos){
	char x=' ';
	for(int i=1; i<n; i++){
		x=c[pos][i];
		if(c[pos][i-1]<x&&c[pos][i+1]<x&&c[pos-1][i]<x&&c[pos+1][i]<x)
			c[pos][i]='X';
	}
}

int main(){
	char** c;
	int n=0;
	int m=0;

	scanf("%d", &n);
	c=new char*[n];

	for(int i=0; i<n; i++){
		c[i]=new char[n];
		cin>>c[i];
	}

	printf("%s\n", c[0]);

	if(n!=1){
		m=n-1;
		for(int i=1; i<m; i++){
			holes(c, m, i);
			printf("%s\n", c[i]);
		}
		printf("%s\n", c[m]);
	}
	
	for(int i=0; i<n; i++)
		delete c[i];

	delete c;

	return 0;
}