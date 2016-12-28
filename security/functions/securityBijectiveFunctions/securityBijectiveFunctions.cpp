
/*
    SOLVED: 12/28/3016
*/

#include <cstdio>
#include <map>

int main() {
    typedef std::map<int, short>::iterator it;
    std::map<int, short>coY;
    int n, val;
    it end;
    
    scanf("%d", &n);
    for(int i=0; i<n; i++){
        scanf("%d", &val);
        coY[val]++;
    }
    
    for(int i=1; i<=n; i++){
        if(!coY[i]){
            puts("NO");
            return 0;
        }
    }
    
    end=coY.end();
    for(it i=coY.begin(); i!=end; i++){
        if(i->second>1){
            puts("NO");
            return 0;
        }
    }
       
    puts("YES");
    
    return 0;
}

