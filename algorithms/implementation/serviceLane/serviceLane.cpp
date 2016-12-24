
/*
	SOLVED: June 2016
*/

#include <cstdio>

#define INF 2147483647

int lane(int* arr, int st, int en);

int main(){
	int* arr;
	int iter;
	int size;
	int start;
	int end;

	scanf("%d %d", &size, &iter);
	arr=new int[size];

	for(int i=0; i<size; i++){
		scanf("%d", &arr[i]);
	}

	for(int i=0; i<iter; i++){
		scanf("%d", &start);
		scanf("%d", &end);

		printf("%d\n", lane(arr, start, end));
	}

	return 0;
}

int lane(int* arr, int st, int en){
	int type=INF;
	int frnt=0;
	int end=0;
	int temp=0;

	for(; st<=en; st++, en--){
		frnt=arr[st];
		end=arr[en];

		temp=(frnt<end?frnt:end);

		if(temp==1)
			return 1;
		if(temp<type)
			type=temp;
	}

	return type;
}