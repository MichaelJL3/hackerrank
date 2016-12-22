
/*
	SOLVED: 12/21/2016
*/

#include <cstdio>

int main(){
    long long int sum=0;
    long int val=0;
    long int biggest;
    long int smallest;
    
    scanf("%ld", &val);
    sum=val;
    biggest=val;
    smallest=val;
    
    for(int i=1; i<5; i++){
        scanf("%ld", &val);
        sum+=val;
        
        if(val<smallest)
            smallest=val;
        else if(val>biggest)
            biggest=val;
    }
    
    printf("%lld %lld\n", sum-biggest, sum-smallest);
    
    return 0;
}
