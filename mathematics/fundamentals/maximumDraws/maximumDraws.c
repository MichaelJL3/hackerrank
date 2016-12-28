
/*
	SOLVED: 12/27/2016
*/

#include <stdio.h>

int main() {
    int n, iter;
    
    scanf("%d", &iter);
    for(int i=0; i<iter; i++){
        scanf("%d", &n);
        printf("%d\n", n+1);
    }
    
    return 0;
}
