
/*
	SOLVED: 12/25/2016
*/

#include <cstdio>
#include <iostream>

using namespace std;

string extract(string input, char a, char b){
	string str="";
	int size=input.size();
	char c;

	for(int i=0; i<size; i++){
		c=input[i];
		if(c==a||c==b)
			str+=c;
	}

	return str;
}

bool valid(string e){
	int size=e.size();
	char c=e[0];
	char b;

	if(!size)
		return false;

	for(int i=1; i<size; i++){
		b=e[i];

		if(c==b)
			return false;

		c=b;
	}

	return true;
}

int main(){
	int len;
	int max=0;
	string s;
	string e;

	scanf("%d", &len);
	cin>>s;

	for(int i=0; i<25; i++){
		for(int j=i+1; j<26; j++){
			e=extract(s, 97+i, 97+j);
			if(valid(e)){
				if(e.size()>max)
					max=e.size();
			}
		}
	}

	printf("%d\n", max);

	return 0;
}