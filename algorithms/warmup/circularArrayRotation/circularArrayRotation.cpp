/*
	SOLVED August 2016
	Language: C++

	modified 12/21/2016 to use printf and scanf
	c functions to increase speed
*/

#include <cstdio>

using namespace std;

int main() {
    int *ar;
    int n=0;
    int k=0;
    int q=0;
    int m=0;
    int indx=0;
    
    scanf("%d", &n);
    scanf("%d", &k);
    scanf("%d", &q);
    ar=new int[n];
    
    for(int i=0; i<n; i++){
        scanf("%d", &ar[i]);
    }
    
    indx=n-(k%n);
    for(int i=0; i<q; i++){
        scanf("%d", &m);
        printf("%d\n", ar[(indx+m)%n]);
    }

    delete ar;
    return 0;
}