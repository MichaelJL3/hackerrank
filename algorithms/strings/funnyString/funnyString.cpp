
/*
	SOLVED: July 2016

	Modified: 12/25/2016
*/

#include <cstdio>
#include <iostream>

using namespace std;

int abs(int n){
	return (n<0?n*-1:n);
}

int main(){
	int iter=0;
	int len=0;
	int a=0;
	int b=0;
	string str;

	scanf("%d", &iter);

	for(int i=0; i<iter; i++){
		cin>>str;

		len=str.length()-1;
		for(int j=0, k=len; j<=k; j++, k--){
			a=abs(str[j+1]-str[j]);
			b=abs(str[k-1]-str[k]);

			if(a!=b){
				printf("Not ");
				break;
			}
		}

		puts("Funny");
	}

	return 0;
}