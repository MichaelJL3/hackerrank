
/*
	SOLVED: August 2016

	Modified: 12/23/2016
*/

#include <iostream>
#include <cstdio>

using namespace std;

long min(long a, long b){
	return (a<b?a:b);
}

int main(){
	int iter=0;
	unsigned long w, b, x, y, z;
	unsigned long tmpx=0;
	unsigned long tmpy=0;
	unsigned long minprice=0;

	scanf("%d", &iter);
	for(int i=0; i<iter; i++){
		scanf("%ld %ld %ld %ld %ld", &w, &b, &x, &y, &z);

		tmpx=w*x;
		tmpy=(w*y)+(w*z);
		minprice=min(tmpx, tmpy);
		tmpx=b*y;
		tmpy=(b*x)+(b*z);
		minprice+=min(tmpx, tmpy);

		printf("%ld\n", minprice);
	}

	return 0;
} 