
/*
	SOLVED: 12/21/2016
*/

#include <map>
#include <cstdio>

int main(){
    typedef std::map<int, int>::iterator it;
    std::map<int, int> counts;
    int n, count=0, key=0;
    
    scanf("%d", &n);
   
    for(int i=0; i<n; i++){
       scanf("%d", &key);
       counts[key]++;
    }
    
    for(it i=counts.begin(); i!=counts.end(); i++){
       count+=i->second/2;
    }
    
    printf("%d\n", count);

    return 0;
}
