
/*
	SOLVED: September 2016

	Modified: 12/26/2016
*/

#include <cstdio>
#include <iostream>

using namespace std;

int **lookup;
string s1;
string s2;

int gcs(int i, int j);
int max(int a, int b);

int main(){
	int n=0;

	cin>>s1>>s2;
    n=s1.length();

	lookup=new int*[n];
	for(int i=0; i<n; i++){
		lookup[i]=new int[n];
		for(int j=0; j<n; j++){
			lookup[i][j]=-1;
		}
	}

	printf("%d\n", gcs(n-1, n-1));

	for(int i=0; i<n; i++){
		delete lookup[i];
	}

	delete lookup;
} 

int gcs(int i, int j){
	if(i==-1||j==-1)
		return 0;

	int look=lookup[i][j];
	int left=0;
	int right=0;

	if(look==-1){
		if(s1[i]==s2[j]){
			look=1+gcs(i-1, j-1);
		}else{
			left=gcs(i-1, j);
			right=gcs(i, j-1);
			if(left>right){
				look=left;
			}
			else{
				look=right;
			}
		}

		lookup[i][j]=look;
	}

	return look;
}	

int max(int a, int b){
	return (a>b?a:b);
}