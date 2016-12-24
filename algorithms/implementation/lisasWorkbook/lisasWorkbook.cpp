
/*
	SOLVED: June 2016
*/

#include <cstdio>
#include <cmath>

int special(int q, int max, int *pagen);

int main(){
	int iter;
	int max;
	int q;
	int count=0;
	int pagen=0;

	scanf("%d %d", &iter, &max);

	for(int i=0; i<iter; i++){
		scanf("%d", &q);
		count+=special(q, max, &pagen);
	}
	
	printf("%d\n", count);

	return 0;
}

int special(int q, int max, int *pagen){
	int total=0;
	int pgs=*pagen+1;

	*pagen+=ceil((double)q/max);
	for(int i=1; i<=q; i++){
		if(i==pgs)
			total++;
		if(!(i%max))
			pgs++;
	}

	return total;
}