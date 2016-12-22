
/*
	SOLVED: May 2016

	Modified: 12/22/2016
*/

#include <cstdio>

int main(){
    int t;
    int n;
    int k;
    int there=0;
    int val;
    
    scanf("%d", &t);
    for(int i=0; i<t; i++){

    	scanf("%d %d", &n, &k);
        for(int j=0; j<n; j++){
           scanf("%d", &val);
           if(val<=0)
               there++;
        }

        if(there<k)
            puts("YES");
        else 
            puts("NO");

    }
    
    return 0;
}
