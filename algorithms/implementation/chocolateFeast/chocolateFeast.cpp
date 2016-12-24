
/*
	SOLVED: May 2016
*/


/*
	SOLVED: May 2016

	Modified: 12/24/2016
*/

#include <cstdio>

int main(){
	int n, c, m, t;
    int eaten;
    int amount;
    int temp;
    
    scanf("%d", &t);
    for(int i=0; i<t; i++){

    	scanf("%d %d %d", &n, &c, &m);
        amount=n/c;
        eaten=amount;
        temp=0;

        for(int i=0; i<amount; i++){
            temp++;
            if(temp>=m){
                eaten++;
                temp=1;
            }
        }

        printf("%d\n", eaten);
    }

    return 0;
}
