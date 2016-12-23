
/*
	SOLVED: July 2016

	Modified: 12/22/2016
*/

#include <cstdio>

void quicksort(int* arr, int l, int r);

int main(){
	int *arr;
	int iter=0;
	int min=0;
	int pos=0;
	int size=0;

	scanf("%d", &iter);
	arr=new int[iter];

	for(int i=0; i<iter; i++){
		scanf("%d", &arr[i]);
	}

	quicksort(arr, 0, iter-1);
	
	pos=0;
	size=iter;
	while(size){
		printf("%d\n", size);
		min=arr[pos];
		for(int i=pos; i<iter; i++){
			arr[i]-=min;
			if(arr[i]<=0){
				size--;
				pos++;
			}
		}
	}

	return 0;
}

void quicksort(int* arr, int l, int r){
	int pivot=arr[l];
	int temp=0;
	int left=l;
	int right=r;
	left++;

	while(left<right){
		while(left<=right&&arr[left]<=pivot){
			left++;
		}
		while(right>=left&&arr[right]>=pivot){
			right--;
		}
		if(left<right){
			temp=arr[left];
			arr[left]=arr[right];
			arr[right]=temp;
		}
	}

	temp=arr[right];
	if(temp<pivot){
		arr[right]=arr[l];
		arr[l]=temp;
	}

	if(l<right-1)
		quicksort(arr, l, right-1);
	if(right+1<r)
		quicksort(arr, right+1, r);
}
