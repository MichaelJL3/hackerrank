
/*
	SOLVED: August 2016

	Modified: 12/26/2016
*/

#include <cstdio>
#include <iostream>

#define LOW 97

using namespace std;

int main(){
	string msg="";
	int set[25];
	int iter=0;
	int size=0;
	int indx=0;
	int count=0;

	scanf("%d", &iter);

	for(int j=0; j<iter; j++){
		cin>>msg;
		size=msg.length();
		count=0;

		for(int i=0; i<25; i++)
			set[i]=0;

		for(int i=0; i<size; i++){
			indx=msg[i]-LOW;
			if(!set[indx]){
				count++;
				set[indx]=1;
			}
		}

		printf("%d\n", count);
	}

	return 0;
}