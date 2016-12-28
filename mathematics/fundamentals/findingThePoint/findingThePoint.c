
/*
	SOLVED: 12/27/2016
*/

#include <stdio.h>

int main() {
    int n, px, py, qx, qy, dx, dy;
    
    scanf("%d", &n);
    for(int i=0; i<n; i++){
        scanf("%d %d %d %d", &px, &py, &qx, &qy);
        dy=qy+(qy-py);
        dx=qx+(qx-px);
        printf("%d %d\n", dx, dy);
    }
    
    return 0;
}
