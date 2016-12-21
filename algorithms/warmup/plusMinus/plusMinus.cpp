
/*
	SOLVED: May 2016

	Modified: 12/21/2016
	You get it by now ~_0
*/

#include <cstdio>

int main(){
	int *ar;
    int n;
    int pos=0;
    int neg=0;
    int zero=0;
    int temp=0;

	scanf("%d", &n);

	ar=new int[n];

    for(int i=0; i<n; i++){
       scanf("%d", &temp);
       ar[i]=temp;
   
       if(!temp)
           zero++;
       else if(temp<0)
           neg++;
       else
           pos++;
    }

    printf("%f\n", (double)pos/n);
    printf("%f\n", (double)neg/n);
    printf("%f\n", (double)zero/n);

    delete ar;
    return 0;
}
