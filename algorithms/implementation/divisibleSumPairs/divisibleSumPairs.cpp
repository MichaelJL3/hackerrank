
/*
	SOLVED: June 2016

	Modified: 12/22/2016
*/

#include <cstdio>

int main(){
	int size=0;
	int inner=0;
	int div=0;
	int ans=0;
	int *ar;

	scanf("%d %d", &size, &div);

	ar=new int[size];

	for(int i=0; i<size; i++)
		scanf("%d", &ar[i]);

	inner=size;
	size--;

	for(int i=0; i<size; i++){
		for(int j=i+1; j<inner; j++){
			if(!((ar[i]+ar[j])%div))
				ans++;
		}
	}

	printf("%d\n", ans);

	delete ar;
	return 0;
} 
