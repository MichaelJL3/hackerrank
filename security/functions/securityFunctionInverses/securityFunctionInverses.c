
/*
	SOLVED: 12/29/2016
*/

#include <stdio.h>

int main() {
    int iter, val;
    int fx[21];
    
    for(int i=1; i<21; i++)
        fx[i]=0;
    
    scanf("%d", &iter);
    for(int i=1; i<=iter; i++){
        scanf("%d", &val);
        fx[val]=i;
    }
    
    for(int i=1; i<21; i++){
        val=fx[i];
        if(val)
            printf("%d\n", val);
    }
      
    return 0;
}
