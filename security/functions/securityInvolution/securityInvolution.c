
/*
	SOLVED: 12/29/2016
*/

#include <stdio.h>

int main() {
    int iter;
    int freq[21];
    
    scanf("%d", &iter);
    for(int i=1; i<=iter; i++)
        scanf("%d", &freq[i]);
    
    for(int i=1; i<=iter; i++){
        if(freq[freq[i]]!=i){
            puts("NO");
            return 0;
        }
    }
        
    puts("YES");
    
    return 0;
}
