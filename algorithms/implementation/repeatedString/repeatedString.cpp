
/*
    SOLVED: September 2016

    Modified: 12/22/2016
*/

#include <iostream>
#include <cstdio>

using namespace std;

int main(){
    int size=0;
    int *set;
    long n=0;
    string s;
    
    cin >> s;
    scanf("%ld", &n);
    
    size=s.length();
    set=new int[size];
    
    if(s[0]=='a')
        set[0]=1;
    else
        set[0]=0;
    
    for(int i=1; i<size; i++)
        set[i]=set[i-1]+((s[i]=='a')?1:0);
    
    printf("%ld\n", (n/size)*set[size-1]+set[n%size-1]);
    
    delete set;
    return 0;
}
