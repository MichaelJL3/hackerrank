
/*
	SOLVED: August 2016

	Modified: 12/23/2016
*/

#include <cstdio>

void stones(int n, int a, int b);

int main(){
	int iter=0;
	int n=0;
	int a=0;
	int b=0;

	scanf("%d", &iter);

	for(int i=0; i<iter; i++){
		scanf("%d %d %d", &n, &a, &b);
		if(a==b)
			printf("%d\n", (--n*a));
		else if(a<b)
			stones(--n, a, b);
		else
			stones(--n, b, a);
	}

	return 0;
}

void stones(int n, int a, int b){
	for(int i=n; i>=0; i--){
		printf("%d ", (a*i+b*(n-i)));
	}
	puts("");
}