
/*
	SOLVED: 12/24/2016
*/

#include <cstdio>
#include <map>

long long int fact(int n, int end){
    long long int f=1;
    
    for(; n>end; n--){
        f*=n;
    }
    
    return f;
}

long long int choose(int n, int k){
    //-> n!/(n-k)!
    return fact(n, n-k);
}

int main() {
    typedef std::map<int, int>::iterator it;
    std::map<int, int>counts;
    long long int total=0;
    int t=0;
    int n=0;
    int a=0;
    
    scanf("%d", &t);
    
    for(int i=0; i<t; i++){
        total=0;

        scanf("%d", &n);
        for(int j=0; j<n; j++){
            scanf("%d", &a);
            counts[a]++;
        }
        
        it end=counts.end();
        for(it j=counts.begin(); j!=end; j++){
            a=j->second;
            if(a>1)
                total+=choose(a, 2);
        }
        counts.clear();
        
        printf("%lld\n", total);  
    }
 
    return 0;
}
