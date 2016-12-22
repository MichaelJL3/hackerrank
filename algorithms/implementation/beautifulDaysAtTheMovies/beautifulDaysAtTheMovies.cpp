
/*
    SOLVED: 12/21/2016
*/

#include <cstdio>

int abs(int n){
    return (n<0?n*-1:n);
}

int reversed(int n){
    int rev=0;
    
    while(n){
        rev=(rev*10)+n%10;
        n/=10;
    }
    
    return rev;
}

int main() {
    int st=0;
    int en=0;
    int mod=0;
    int count=0;
    
    scanf("%d %d %d", &st, &en, &mod);
    
    for(; st<=en; st++){
        if(!(abs(st-reversed(st))%mod))
            count++;
    }
    
    printf("%d\n", count);
    
    return 0;
}
