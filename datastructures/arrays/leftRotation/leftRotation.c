
/*
    SOLVED: 12/29/2016
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, d, en;
    int *arr;
    
    scanf("%d %d", &n, &d);
    arr=(int*)malloc(sizeof(int)*n);
    
    for(int i=0; i<n; i++)
        scanf("%d", &arr[i]);
    
    en=d+n;
    for(; d<en; d++)
        printf("%d ", arr[d%n]);
               
    puts("");
    free(arr);
    return 0;
}
