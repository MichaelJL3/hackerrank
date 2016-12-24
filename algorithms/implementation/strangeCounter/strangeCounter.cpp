
/*
	SOLVED: September 2016

	Modified: 12/24/2016
*/

#include <cstdio>

int main(){
	unsigned long t=0;
	unsigned long c=1;
    unsigned long i=3;

	scanf("%ld", &t);
    
    for(; i<t; ){
        i*=2;
        i+=3;
    }
    
    for(; i>t; i--)
        c++;

	printf("%ld\n", c);

	return 0;
}