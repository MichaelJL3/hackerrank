
/*
    SOLVED: 12/22/2016
*/

#include <cstdio>

int main() {
    int t;
    unsigned int n;
    unsigned int m;
    unsigned int s;
    unsigned int id;
    
    scanf("%d", &t);
    for(int i=0; i<t; i++){
        id=0;
        
        scanf("%d %d %d", &n, &m, &s);
        id+=(m+s-1)%n;
        if(!id)
            id=n;
        
        printf("%d\n", id);   
    }
    
    return 0;
}
