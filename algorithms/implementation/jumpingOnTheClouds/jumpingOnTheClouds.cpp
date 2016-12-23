
/*
	SOLVED: August 2016

	Modifier: 12/22/2016
*/

#include <cstdio>

int jumps(int* ar, int n);

int main(){
    int n;
    int* ar;
    
    scanf("%d", &n);
    ar=new int[n];
    
    for(int i=0; i<n; i++){
       scanf("%d", &ar[i]);
    }
    
    printf("%d\n", jumps(ar, n));
    delete ar;
    
    return 0;
}

int jumps(int* ar, int n){
    int jump=0;
    
    for(int i=0; i<n; jump++){
        if(i+2<n&&!ar[i+2])
            i+=2;
        else
            i++;
    }
    
    return --jump;
}