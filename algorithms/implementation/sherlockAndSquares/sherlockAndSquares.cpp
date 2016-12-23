#include <cstdio>
#include <cmath>

int search(int *ar, int n, int bound);

int main(){
	int iter=0;
	int lower=0;
	int upper=0;

	int sqrs[31623];

	for(int i=1; i<=31623; i++){
		sqrs[i-1]=i*i;
	}

	scanf("%d", &iter);

	for(int i=0; i<iter; i++){
		scanf("%d", &lower);
		scanf("%d", &upper);

		printf("%d\n", (search(sqrs, upper, 1)-search(sqrs, lower, 0)));
	}

	return 0;
} 

int search(int *ar, int n, int bound){
	int l=0;
	int r=31622;
	int m=0;
	int max=0;

	while(l<=r){
		m=floor((double)(l+r)/2);
		if(ar[m]<n)
			l=m+1;
		else if(ar[m]>n){
			max=m;
			r=m-1;
		}
		else
			return m+bound;
	}
	return max;
}