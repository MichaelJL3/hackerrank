
/*
	SOLVED: July 2016

	Modified: 12/26/2016
*/

#include <cstdio>
#include <iostream>

using namespace std;

int anagram(string str, int len);
int abs(int n);

int main(){
	int iter=0;
	int len=0;
	string str;

	scanf("%d", &iter);

	for(int i=0; i<iter; i++){
		cin>>str;

		len=str.length();
		if(len%2)
			puts("-1");
		else{
			printf("%d\n", anagram(str, len-1));
		}
	}

	return 0;
}

int anagram(string str, int len){
	int count=0;
	int firsthalf[26];
	int sechalf[26];

	for(int i=0; i<26; i++){
		firsthalf[i]=0;
		sechalf[i]=0;
	}

	for(int i=0, j=len; i<=j; i++, j--){
		firsthalf[str[i]-97]++;
		sechalf[str[j]-97]++;
	}

	for(int i=0; i<26; i++){
		count+=abs(firsthalf[i]-sechalf[i]);
	}

	return count/2;
}

int abs(int n){
	return (n<0?n*-1:n);
}