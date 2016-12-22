
/*
    SOLVED: September 2016

    Modified: 12/22/2016
*/

#include <cstdio>

int main() {   
    int n=0;
    int k=0;
    int val=0;
    int diff=0;
    int actual=0;
    
    scanf("%d %d", &n, &k);
    
    for(int i=0; i<n; i++){
        scanf("%d", &val);
        actual+=val;
        if(i==k)
            actual-=val;
    }
    
    actual/=2;
    scanf("%d", &val);
    
    diff=val-actual;
    if(!diff)
        puts("Bon Appetit");
    else
        printf("%d\n", diff);
    
    return 0;
}
