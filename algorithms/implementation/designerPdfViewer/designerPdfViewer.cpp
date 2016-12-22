
/*
    SOLVED: 12/21/2016
*/

#include <cstdio>
#include <iostream>

using namespace std;

int main(){
    int size=0;
    int max=0;
    int heights[26];
    int hght;
    
    for(int i=0; i<26; i++){
        scanf("%d", &hght);
        heights[i]=hght;
    }
    
    string word;
    cin >> word;
    size=word.length();
    
    for(int i=0; i<size; i++){
        hght=heights[word[i]-97];
        if(hght>max)
            max=hght;
    }
    
    printf("%d\n", max*size);
    
    return 0;
}
