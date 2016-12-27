
/*
	SOLVED: September 2016

	Modified: 12/26/2016
*/

#include <cstdio>
#include <iostream>

#define LOW 97

using namespace std;

int main(){
	string s="";
	int size=0;
	int set[26];
	int s_one=0;
	int s_two=0;
	int s_cnt1=0;
	int s_cnt2=0;
	int cur=0;

	cin>>s;
	size=s.length();

	for(int i=0; i<26; i++)
		set[i]=0;

	for(int i=0; i<size; i++)
		set[s[i]-LOW]++;

	for(int i=0; i<26; i++){
		cur=set[i];
		if(cur){
			if(!s_one){
				s_one=cur;
				s_cnt1++;
			}
			else if(cur==s_one){
				s_cnt1++;
				if(s_cnt1>1&&s_cnt2>1){
					puts("NO");
					return 0;
				}
			}
			else if(!s_two){
				s_two=cur;
				s_cnt2++;
			}
			else if(cur==s_two){
				s_cnt2++;
				if(s_cnt1>1&&s_cnt2>1){
					puts("NO");
					return 0;
				}
			}
			else if((s_one-1)!=s_two&&(s_two-1)!=s_one){
				puts("NO");
				return 0;
			}
			else{
				puts("NO");
				return 0;
			}
		}
	}

	puts("YES");

	return 0;
}