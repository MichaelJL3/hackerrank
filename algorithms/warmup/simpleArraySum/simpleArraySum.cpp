
/*
	SOLVED: May 2016

	Modified: 12/21/2016
	Better faster more C like
*/

#include <cstdio>

int main(){
    int n, sum=0;
    int *ar;

    scanf("%d", &n);
    
    ar=new int[n];
    
    for(int i=0; i<n; i++){
       scanf("%d", &ar[i]);
       sum+=ar[i];
    }

    printf("%d\n", sum);

    delete ar;
    return 0;
}
