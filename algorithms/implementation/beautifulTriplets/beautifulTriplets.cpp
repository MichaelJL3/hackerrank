#include <cstdio>

#define MAX_AR 20001

int main() {
    int set[MAX_AR];
    int *ar;
    int n=0;
    int d=0;
    int count=0;
    int key=0;
    
    for(int i=0; i<MAX_AR; i++){
        set[i]=0;
    }
    
    scanf("%d %d", &n, &d);
    ar=new int[n];
    
    for(int i=0; i<n; i++){
        scanf("%d", &ar[i]);
        set[ar[i]]++;
    }
    
    n--;
    for(; n>0; n--){
        if(ar[n]<d)
            break;
        key=ar[n]-d;
        if(set[key]){
            key-=d;
            if(key>=0&&set[key])
                count++;
        }
    }
    
    printf("%d\n", count);
    
    delete ar;
    return 0;
}
