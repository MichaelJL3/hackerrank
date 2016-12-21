
/*
    SOLVED: August 2016

    Modified: 12/21/2016
    More C like, faster
*/

#include <cstdio>

int main(){
    int alice=0;
    int bob=0;
    int a[3];
    int b[3];
    
    scanf("%d %d %d %d %d %d", &a[0], &a[1], &a[2], &b[0], &b[1], &b[2]);
    
    for(int i=0; i<3; i++){
        if(a[i]<b[i])
            bob++;
        else if(a[i]>b[i])
            alice++;
    }
    
    printf("%d %d\n", alice, bob);
    
    return 0;
}