
/*
	SOLVED: November 2016
*/

#include <cstdio>
#include <iostream>

using namespace std;

int main() {
    int n=0;
    int length;
    int count=0;
    int ar[26];
    int freq[26];
    string str;
    
    for(int i=0; i<26; i++){
        ar[i]=1;
        freq[i]=0;
    }
    
    scanf("%d", &n);
    for(int i=0; i<n; i++){
        cin>>str;
        length=str.length();
        
        for(int j=0; j<length; j++){
            freq[str[j]-97]++;
        }
        
        for(int j=0; j<26; j++){
            if(!freq[j])
                ar[j]=0;
            freq[j]=0;
        }
    }
    
    for(int i=0; i<26; i++){
        if(ar[i])
            count++;
    }
    
    printf("%d\n", count);
    
    return 0;
}
