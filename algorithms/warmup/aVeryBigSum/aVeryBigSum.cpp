
/*
	SOLVED: May 2016

	Modified: 12/21/2016
	faster more C like ( C <3 )
	should malloc but im lazy
*/

#include <cstdio>

int main(){
	long long int sum=0;
    int n;
    int *ar;

	scanf("%d", &n);
	ar=new int[n];
    
    for(int i=0; i<n; i++){
       scanf("%d", &ar[i]);
       sum+=ar[i];
    }
    
    printf("%lld\n", sum);

    delete ar;
    return 0;
}
