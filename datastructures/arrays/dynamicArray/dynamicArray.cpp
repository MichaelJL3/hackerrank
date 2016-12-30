
/*
    SOLVED: 12/29/2016
*/

#include <cstdio>
#include <vector>

using namespace std;

int main() {
    vector<int>*arr;
    vector<int> curr;
    int n, q, type, indx, val;
    int lastRes=0;
    
    scanf("%d %d", &n, &q);
    arr=new vector<int>[n];
    
    for(int i=0; i<q; i++){
        scanf("%d %d %d", &type, &indx, &val);
        if(type==1){
            arr[(indx^lastRes)%n].push_back(val);
        }else{
            curr=arr[(indx^lastRes)%n];
            lastRes=curr[val%curr.size()];
            printf("%d\n", lastRes);
        }
    }
    
    return 0;
}
