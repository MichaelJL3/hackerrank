
/*
	SOLVED: 12/27/2016
*/

#define MOD 1234567

#include <stdio.h>

int main(){
	int iter, n, val;
	long long int tot;

	scanf("%d", &iter);
	for(int i=0; i<iter; i++){
		scanf("%d", &n);
		n--;
		tot=1;

		for(int j=0; j<n; j++){
			scanf("%d", &val);
			tot=(tot*val)%MOD;
		}

		printf("%lld\n", tot);
	}

	return 0;
}