
/*
	SOLVED: September 2016

	Modified: 12/25/2016
*/

#include <cstdio>
#include <iostream>

using namespace std;

int palin(string s, int i, int j){
	for(; i<=j; i++, j--){
		if(s[i]!=s[j])
			return 1;	
	}

	return 0;
}

int main(){
	string s;
	int size;
	int iter;
	int pos;
	int pall;
	int palr;

	scanf("%d", &iter);

	for(int i=0; i<iter; i++){
		cin>>s;
		size=s.length();
		pos=-1;

		for(int j=0, k=size-1; j<=k; j++, k--){
			if(s[j]!=s[k]){
				pall=palin(s, j+1, k);
				palr=palin(s, j, k-1);
				if(!pall)
					pos=j;
				if(!palr)
					pos=k;
				break;
			}
		}

		printf("%d\n", pos);
	}

	return 0;
}