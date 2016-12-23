
/*
	SOLVED: July 2016

	Modified: 12/22/2016
*/

#include <cstdio>
#include <iostream>

using namespace std;

void max(bool **set, int iter, int size);

int main(){
	int iter=0;
	int size=0;
	string str;
	bool **set;

	scanf("%d %d", &iter, &size);
	set=new bool*[iter];

	for(int i=0; i<iter; i++){
		set[i]=new bool[size];
		cin>>str;
		for(int j=0; j<size; j++){
			set[i][j]=str[j]-48;
		}
	}

	max(set, iter, size);
	
	for(int i=0; i<iter; i++)
		delete set[i];
	delete set;
	return 0;
} 

void max(bool **set, int iter, int size){
	int maxcount=0;
	int maxteams=0;
	int miss=0;
	int val=0;
	int count[size];
	bool full=true;

	for(int i=0; i<iter; i++){
		for(int j=i+1; j<iter; j++){
			full=true;
			miss=0;
			for(int k=0; k<size; k++){
				if(!(set[i][k]|set[j][k])){
					miss++;
					full=false;
				}
			}
			val=size-miss;
			if(full){
				maxcount=size;
				maxteams++;
			}
			else if(maxcount==val){
				count[i]=val;
			}
			else if(maxcount!=size&&maxcount<val){
				maxcount=val;
				count[i]=val;
			}
		}
	}

	if(!maxteams)
		for(int i=0; i<iter; i++){
			if(count[i]==maxcount)
				maxteams++;
		}

	printf("%d\n%d\n", maxcount, maxteams);
}