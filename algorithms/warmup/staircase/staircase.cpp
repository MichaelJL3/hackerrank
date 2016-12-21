
/*
	SOLVED: May 2016

	Modified: 12/21/2016
	dont use recursion here or I wont respect you
	totally unecessary
*/

#include <cstdio>


void staircase(int n);

int main(){
    int n;
    scanf("%d", &n);
    staircase(n);
    return 0;
}

void staircase(int n){
    char stair[n+1];
    int level=1;
    int tmplvl=0;

    while(level<=n){
    	tmplvl=n-level;
        for(int i=0; i<tmplvl; i++)
            stair[i]=' ';

        for(int i=tmplvl; i<n; i++)
            stair[i]='#';

        level++;
        printf("%s\n", stair);
    }
}
