
/*
    SOLVED: 12/21/2016
*/

#include <cstdio>

int main() {
    int max=0;
    int key=0;
    int cuts=0;
    int n=0;
    int numbers[101];
    int number=0;
    
    scanf("%d", &n);

    for(int i=0; i<101; i++)
        numbers[i]=0;
    
    for(int i=0; i<n; i++){
        scanf("%d", &number);
        numbers[number]++;
    }
    
    max=numbers[0];
    for(int i=1; i<101; i++){
        if(numbers[i]>max){
            max=numbers[i];
            key=i;
        }
    }
    
    for(int i=0; i<key; i++)
        cuts+=numbers[i];
    for(int i=key+1; i<101; i++)
        cuts+=numbers[i];
    
    printf("%d\n", cuts);
    
    return 0;
}
