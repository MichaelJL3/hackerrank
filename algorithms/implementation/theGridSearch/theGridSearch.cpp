
/*
	SOLVED: August 2016

	Modified: 12/24/2016
*/

#include <cstdio>
#include <iostream>

using namespace std;

int search(string* grid, string* srch, int ghght, int shght);
int found(string* grid, string* srch, int pos, int shght, int loc);

int main(){
	string *grid;
	string *srch;
	int iter;
	int phght;
	int pwdth;
	int chght=0;
	int cwdth=0;

	scanf("%d", &iter);

	for (int i=0; i<iter; i++){
		scanf("%d", &phght);
		scanf("%d", &pwdth);
		
		grid=new string[phght];
		for(int j=0; j<phght; j++){
			cin>>grid[j];
		}

		scanf("%d", &chght);
		scanf("%d", &cwdth);
			
		srch=new string[chght];
		for(int j=0; j<chght; j++){
			cin>>srch[j];
		}

		if(chght>phght)
			puts("NO");
		else if(search(grid, srch, phght, chght))
			puts("YES");
		else
			puts("NO");

		delete []srch;
		delete []grid;
	}

	return 0;
} 

int search(string* grid, string* srch, int ghght, int shght){
	int fnd=0;
	int run=ghght-shght+1;
	int pos=0;
	string line;

	if(ghght<shght)
		return 0;

	for(int i=0; i<run; i++){
		line=grid[i];
		fnd=line.find(srch[0]);
		pos=0;
		while(fnd!=string::npos){
			if(found(grid, srch, i+1, shght, pos+fnd))
				return 1;
			line=line.substr(fnd+1);
			pos+=fnd+1;
			fnd=line.find(srch[0]);
		}
	}

	return 0;
}

int found(string* grid, string* srch, int pos, int shght, int loc){
	int fnd=0;
	int inc=pos;
	int locpos=0;
	string line;

	for(int i=1; i<shght; i++){
		line=grid[pos];
		fnd=line.find(srch[i]);
		locpos=0;
		while(fnd!=string::npos){
			if(locpos+fnd==loc){
				pos++;
				break;
			}
			else if(fnd>loc)
				return 0;
			line=line.substr(fnd+1);
			locpos+=fnd+1;
			fnd=line.find(srch[i]);
		}
		if(pos==inc)
			return 0;
		inc=pos;
	}

	return 1;
}