
/*
	SOLVED: 12/27/2016
*/

#include <stdio.h>

int min(int a, int b){
	return (a<b?a:b);
}

int main(){
	int iter, a, b, c, d, sq, high;

	scanf("%d", &iter);
	for(int i=0; i<iter; i++){
		scanf("%d %d", &a, &b);

		high=min(a, b);
		c=a*b;
		d=1;

		for(int j=2; j<high; j++){
			sq=j*j;
			if(!(c%sq)&&!(b%j))
				d=c/sq;
		}

		printf("%d\n", d);
	}

	return 0;
}