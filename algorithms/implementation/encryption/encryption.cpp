
/*
	SOLVED: August 2016
*/

#include <iostream>
#include <string>
#include <math.h>

#define INF 2147483647

using namespace std;

int main(){
	string line="";
	string encrypt="";
	int len=0;
	int lower=0;
	int upper=0;
	int area=0;
	int rows=0;
	int cols=0;
	int indx=0;
	int min=INF;
	double root=0;

	cin>>line;
	len=line.length();

	root=sqrt(len);
	lower=floor(root);
	upper=ceil(root);

	for(; lower<=upper; lower++){
		area=lower*upper;
		if(area<min&&area>=len){
			min=area;
			rows=lower;
			cols=upper;
		}
	}
	
	for(int i=0; i<cols; i++){
		encrypt="";
		for(int j=0; j<rows; j++){
			indx=i+j*cols;
			if(indx<len){
				encrypt+=line[indx];
			}
		}
		cout<<encrypt<<" ";
	}
	cout<<"\n";

	return 0;
}