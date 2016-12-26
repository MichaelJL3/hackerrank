
/*
	SOLVED: May 2016

	Modified: 12/25/2016
*/

#include <cstdio>
#include <iostream>

using namespace std;

string caesar(string s, int length, int shift);

int main(){
    int n, k;
    string s;

    scanf("%d", &n);
    cin >> s;
    scanf("%d", &k);

    cout<<caesar(s,n,k);
    puts("");

    return 0;
}

string caesar(string s, int length, int shift){
    char c;
    string encrypt="";
    for(int i=0; i<length; i++){
        c=s[i];
        if(c>=97&&c<=122){
            encrypt+=((c-97)+shift+26)%26+97;
        }
        else if(c>=65&&c<=90){
            encrypt+=((c-65)+shift+26)%26+65;
        }
        else
            encrypt+=s[i];
    }
    return encrypt;
}
