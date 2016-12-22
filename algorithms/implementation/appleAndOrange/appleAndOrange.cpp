
/*
  SOLVED: 12/21/2016
*/

#include <cstdio>

int main(){
    int s=0;
    int t=0;
    int a=0;
    int b=0;
    int m=0;
    int n=0;
    int d=0;
    int temp=0;
    int count=0;
    
    scanf("%d %d %d %d %d %d", &s, &t, &a, &b, &m, &n);
    
    for(int i=0; i<m; i++){
       scanf("%d", &d);
       temp=a+d;
       if(d>0&&temp>=s&&temp<=t)
           count++;
    }
    
    printf("%d\n", count);
    
    count=0;
    for(int i=0; i<n; i++){
       scanf("%d", &d);
       temp=b+d;
       if(d<0&&temp>=s&&temp<=t)
           count++;
    }
    
    printf("%d\n", count);
    
    return 0;
}
