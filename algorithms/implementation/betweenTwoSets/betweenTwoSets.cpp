
/*
    SOLVED: 12/22/2016

    There were def optimizations that could have been made
    based on simple examination of the set but i decided
    it was not worth because the max value was 100 and max
    set sizes are 10 
*/

#include <cstdio>

int main(){
    int n;
    int m;
    int *setA;
    int *setB;
    int max=1;
    int min=100;
    int val;
    int count=0;
    bool between;
    
    scanf("%d %d", &n, &m);
    setA=new int[n];
    setB=new int[m];
    
    for(int i=0; i<n; i++){
       scanf("%d", &val);
       setA[i]=val;
       if(val>max)
           max=val;
    }

    for(int i=0; i<m; i++){
       scanf("%d", &val);
       setB[i]=val;
       if(val<min)
           min=val;
    }
    
    if((min-max)<0){
        puts("0");
        return 0;
    }
    
    for(int i=max; i<=min; i++){
        between=true;
        for(int j=0; j<n; j++){
            if(i%setA[j]){
                between=false;
                break;
            }
        }
        for(int j=0; j<m; j++){
            if(setB[j]%i){
                between=false;
                break;
            }
        }
        if(between)
            count++;
    }
    
    delete setA;
    delete setB;
    
    printf("%d\n", count);
    
    return 0;
}
