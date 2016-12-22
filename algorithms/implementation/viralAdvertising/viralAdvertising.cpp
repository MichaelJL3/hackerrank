
/*
    SOLVED: 12/21/2016
*/

#include <cstdio>

int main() {
    int n=0;
    int liked=0;
    int ppl=5;
    int total=0;
    
    scanf("%d", &n);
    
    if(n==1){
        puts("2");
        return 0;
    }
    
    for(int i=0; i<n; i++){
        liked=ppl/2;
        ppl=liked*3;
        total+=liked;
    }
    
    printf("%d\n", total);
    
    return 0;
}
