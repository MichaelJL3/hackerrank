
/*
	SOLVED: May 2016

	Modified: 12/21/2016
	lets face it we all know by now
	im just making it more like C 
	not that you saw it when it was more C++
	anyway
*/

#include <cstdio>

int abs(int n){
	return (n<0?n*-1:n);
}

int main(){
	int **ar;
    int n, prim_sum=0, sec_sum=0;

    scanf("%d", &n);

    ar=new int*[n];
    for(int i=0; i<n; i++){
       ar[i]=new int[n];	
       for(int j=0; j<n; j++){
          scanf("%d", &ar[i][j]);
       }
    }

    for(int i=0; i<n; i++){
        prim_sum+=ar[i][i];
        sec_sum+=ar[n-i-1][i];
    }

    for(int i=0; i<n; i++){
    	delete ar[i];
    }
    delete ar;
  
    printf("%d\n", abs(prim_sum-sec_sum));

    return 0;
}
