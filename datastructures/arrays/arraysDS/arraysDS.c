
/*
	SOLVED: 12/29/2016
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
	int n;
	int *arr;

	scanf("%d", &n);
	arr=(int*)malloc(sizeof(int)*n);
	
	for(int i=n-1; i>=0; i--)
		scanf("%d", &arr[i]);
	for(int i=0; i<n; i++)
		printf("%d ", arr[i]);
	
	puts("");
	free(arr);
	return 0;
}