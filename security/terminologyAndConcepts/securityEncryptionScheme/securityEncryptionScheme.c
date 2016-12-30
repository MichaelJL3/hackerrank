
/*
	SOLVED: 12/29/2016
*/

#include <stdio.h>

int factorial(int n){
    int ret=1;
    
    for(int i=2; i<=n; i++)
        ret*=i;
        
    return ret;
}

int main() {
    int n;
    
    scanf("%d", &n);
    printf("%d\n", factorial(n));
    
    return 0;
}
