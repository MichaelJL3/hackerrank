
/*
	SOLVED: 12/29/2016
*/

#include "stdio.h"
#include "stdlib.h"

int main(){
	int mtx[6][6];
	int sum;
	int maxSum=0;

	for(int i=0; i<6; i++){
		for(int j=0; j<6; j++){
			scanf("%d", &mtx[i][j]);
		}
	}

	for(int i=0; i<4; i++){
		for(int j=0; j<4; j++){
			sum=mtx[i][j]+mtx[i][j+1]+mtx[i][j+2]+mtx[i+1][j+1]+mtx[i+2][j]+mtx[i+2][j+1]+mtx[i+2][j+2];
			maxSum=(sum>maxSum?sum:maxSum);
		}
	}

	printf("%d\n", maxSum);
}