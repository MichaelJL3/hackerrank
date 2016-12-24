
/*
	SOLVED: August 2016

	Modified: 12/21/2016
*/

#include <cstdio>

#define INF 2147483647

int max(int a, int b){
	return (a>b?a:b);
}

int min(int a, int b){
	return (a<b?a:b);
}

int abs(int n){
	return (n<0?n*-1:n);
}

int main(){
	int n, m, val;
	int dist=0;
	int large=0;
	int *stations;
	int *set;

	scanf("%d %d", &n, &m);
	stations=new int[m];
	set=new int[n];

	for(int i=0; i<n; i++)
		set[i]=0;

	for(int i=0; i<m; i++){
		scanf("%d", &val);
		stations[i]=val;
		set[val]=1;
	}

	for(int i=0; i<n; i++){
		if(!set[i]){
			dist=INF;
			for(int j=0; j<m; j++){
				dist=min(abs(stations[j]-i), dist);
			}
			large=max(large, dist);
		}
	}

	printf("%d\n", large);

	delete set;
	delete stations;

	return 0;
}