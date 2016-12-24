
/*
	SOLVED: August 2016

	Modified: 12/24/2016
*/

#include <cstdio>
#include <map>

#define INF 2147483647

int min(int a, int b){
	return (a<b?a:b);
}

int abs(int n){
	return (n<0?n*-1:n);
}

int main(){
	int size;
	int val;
	int pos;
	int mindist=INF;

	std::map<int, int> nummap;
	scanf("%d", &size);

	for(int i=0; i<size; i++){
		scanf("%d", &val);
		
		pos=nummap[val];
		if(pos)
			mindist=min(abs(pos-i), mindist);
		nummap[val]=i;
	}

	if(mindist==INF)
		mindist=-1;
	
	printf("%d\n", mindist);

	return 0;
} 
