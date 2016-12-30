
/*
	SOLVED: 12/29/2016
*/

#include <cstdio>
#include <iostream>
#include <map>

using namespace std;

int main() {
    map<string, int>count;
    string s;
    int n;
    
    scanf("%d", &n);
    for(int i=0; i<n; i++){
        cin>>s;
        count[s]++;
    }
    
    scanf("%d", &n);
    for(int i=0; i<n; i++){
        cin>>s;
        printf("%d\n", count[s]);
    }
    
    return 0;
}
