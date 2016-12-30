
/*
	SOLVED: 12/29/2016
*/

#include <iostream>

using namespace std;

int main() {
    string s;
    int len;
    
    cin>>s;
    len=s.length();
    
    for(int i=0; i<len; i++){
        s[i]=((s[i]-47)%10)+48;
    }
    
    cout<<s<<"\n";
    
    return 0;
}