
/*
	SOLVED: August 2016

	Modified: 12/22/2016
*/

#include <cstdio>

int main(){
	int ret[3];
	int exp[3];
	int ddiff=0;
	int mdiff=0;
	int ydiff=0;

	scanf("%d %d %d %d %d %d", &ret[0], &ret[1], &ret[2], &exp[0], &exp[1], &exp[2]);

	ddiff=ret[0]-exp[0];
	mdiff=ret[1]-exp[1];
	ydiff=ret[2]-exp[2];

	if(ydiff>0)
		puts("10000");
	else if(!ydiff){
		if(mdiff>0)
			printf("%d\n", 500*mdiff);
		else if(!mdiff)
			if(ddiff>0)
				printf("%d\n", 15*ddiff);
			else
				puts("0");
		else
			puts("0");
	}
	else
		puts("0");

	return 0;
}