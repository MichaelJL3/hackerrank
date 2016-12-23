
/*
	SOLVED: August 2016

	Modified: 12/22/2016
*/

#include <cstdio>

int energy(int* ar, int n, int k);

int main(){
	int n=0;
	int k=0;
	int *ar;

	scanf("%d %d", &n, &k);
	ar=new int[n];

	for (int i=0; i<n; i++){
		scanf("%d", &ar[i]);
	}

	printf("%d\n", energy(ar, n, k));
	delete ar;
	return 0;
} 

int energy(int* ar, int n, int k){
	int pos=0;
	int e=100;
	
	do{
		pos=(pos+k)%n;
		if(ar[pos])
			e-=3;
		else
			e-=1;
	}while(pos);

	return e; 
}