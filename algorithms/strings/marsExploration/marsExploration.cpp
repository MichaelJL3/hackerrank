
/*
	SOLVED: August 2016

	Modified: 12/25/2016
*/

#include <cstdio>
#include <iostream>

using namespace std;

int main(){
	string msg;
	int size, mod;
	int count=0;
	
	cin>>msg;
	size=msg.length();

	for(int i=0; i<size; i++){
		mod=i%3;
		if(mod==1&&msg[i]!='O') count++;
		else if((!mod||mod==2)&&msg[i]!='S') count++;
	}

	printf("%d\n", count);
}