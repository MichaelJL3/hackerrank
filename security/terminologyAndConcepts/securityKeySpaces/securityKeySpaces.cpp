
/*
	SOLVED: 12/29/2016
*/

#include <cstdio>
#include <iostream>

using namespace std;

int main() {
    string s;
    int len, e, shift;
    
    cin>>s;
    scanf("%d", &e);
    len=s.length();
    
    shift=48-e;
    for(int i=0; i<len; i++){
        s[i]=((s[i]-shift)%10)+48;
    }
    
    cout<<s<<"\n";
    
    return 0;
}
