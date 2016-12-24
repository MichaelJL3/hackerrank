
/*
	SOLVED: September 2016

	Modified: 12/24/2016
*/

#include <cstdio>

int main(){
	int size=0;
	int count=0;
	int *ar;

	scanf("%d", &size);
	ar=new int[size];

	for(int i=0; i<size; i++)
		scanf("%d", &ar[i]);

	size--;
	for(int i=0; i<size; i++){
		if(ar[i]%2){
			count+=2;
			ar[i+1]++;
		}
	}

	if(ar[size]%2)
		puts("NO");
	else
		printf("%d\n", count);

	return 0;
}