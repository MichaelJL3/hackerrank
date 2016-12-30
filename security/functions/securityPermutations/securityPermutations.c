
/*
    SOLVED: 12/29/2016
*/

#include <stdio.h>

int main() {
    int iter;
    int freq[21];
    
    for(int i=1; i<21; i++)
        freq[i]=0;
    
    scanf("%d", &iter);
    for(int i=1; i<=iter; i++)
        scanf("%d", &freq[i]);
    
    for(int i=1; i<=iter; i++){
        printf("%d\n", freq[freq[i]]);
    }
    
    return 0;
}
