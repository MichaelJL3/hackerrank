
/*
    SOLVED: May 2016

    Modified: 12/22/2016
*/

#include <cstdio>

long height(int n);

int main(){
    int t;
    int n;
    
    scanf("%d", &t);
    for(int i=0; i<t; i++){
        scanf("%d", &n);
        printf("%ld\n", height(n));
    }

    return 0;
}

long height(int n){
    int ht=1;
    for(int i=1; i<=n; i++){
        if(!(i%2))
            ht++;
        else
            ht*=2;
    }
    return ht;
}
