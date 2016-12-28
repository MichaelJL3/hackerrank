
/*
	SOLVED: 12/27/2016
*/

#include <stdio.h>

int main(){
    int iter, n;
    
    scanf("%d",&iter);
    for(int i=0; i<iter; i++){
        scanf("%d",&n);
        printf("%d\n", (n*(n-1))/2);        
    }
    
    return 0;
}
