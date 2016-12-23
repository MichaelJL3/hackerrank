
/*
	SOLVED: August 2016

	Modified: 12/23/2016
*/

#include <cstdio>

using namespace std;

int main(){
	int p=0, q=0;
	long vl, vr, v;
	long vtm=0;
	long div=0;
	int count=0;
	bool suc=false;

	scanf("%d %d", &p, &q);

	for(int i=p; i<=q; i++){
		vl=0, vr=0;
		count=1;
		div=1;
		v=(long)i*i;
		vtm=v;

		while(v){
			count++;
			if(count==2){
				count=0;
				div*=10;
			}
			v/=10;
		}

		vl=vtm/div;
		vr=vtm%div;

		if(vl+vr==i){
			printf("%d ", i);
			suc=true;
		}
	}

	if(!suc)
		printf("INVALID RANGE");
	puts("");

	return 0;
}