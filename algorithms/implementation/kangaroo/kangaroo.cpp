
/*
	SOLVED: July 2016

	Modified: 12/22/2016
*/

#include <cstdio>
#include <cmath>

int abs(int n){
	return (n<0?n*-1:n);
}

int intersect(int one, int two, int x, int y){
	double m=0;
	int c=abs(one-two);
	int d=abs(x-y);

	if(!d)
		if(!c)
			return 1;
		else
			return 0;
	
	m=(double)c/d;
	if(m==floor(m))
		return 1;

	return 0;
}

int main(){
	int xone=0;
	int vone=0;
	int xtwo=0;
	int vtwo=0;

	scanf("%d %d %d %d", &xone, &vone, &xtwo, &vtwo);

	if((xtwo>xone&&vtwo>vone)||(xone>xtwo&&vone>vtwo))
		puts("NO");
	else if(intersect(xone, xtwo, vone, vtwo))
		puts("YES");
	else
		puts("NO");
} 