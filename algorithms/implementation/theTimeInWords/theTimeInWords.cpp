
/*
	SOLVED: August 2016
*/

#include <iostream>
#include <string>

using namespace std;

string hour(int n);
string minutes(int n);
string single(int n);

string hour(int n){
	string hr="";

	switch(n){
		case 1: hr="one"; break;
		case 2: hr="two"; break;
		case 3: hr="three"; break;
		case 4: hr="four"; break;
		case 5: hr="five"; break;
		case 6: hr="six"; break;
		case 7: hr="seven"; break;
		case 8: hr="eight"; break;
		case 9: hr="nine"; break;
		case 10: hr="ten"; break;
		case 11: hr="eleven"; break;
		default: hr="twelve"; break;	
	}

	return hr;
}

string minutes(int n){
	string m="";
	int lm=0;
	int rm=0;

	if(!n%10||n<=20){
		m=single(n)+" ";
	}
	else{
		lm=n/10;
		m=single(lm*10)+" ";
		rm=n%10;
		m+=single(rm)+" ";
	}

	return m;
}

string single(int n){
	string dgt="";

	switch(n){
		case 1: dgt="one"; break;
		case 2: dgt="two"; break;
		case 3: dgt="three"; break;	
		case 4: dgt="four"; break;
		case 5: dgt="five"; break;
		case 6: dgt="six"; break;
		case 7: dgt="seven"; break;
		case 8: dgt="eight"; break;
		case 9: dgt="nine"; break;
		case 10: dgt="ten"; break;
		case 11: dgt="eleven"; break;
		case 12: dgt="twelve"; break;
		case 13: dgt="thirteen"; break;
		case 14: dgt="fourteen"; break;
		case 16: dgt="sixteen"; break;
		case 17: dgt="seventeen"; break;
		case 18: dgt="eighteen"; break;
		case 19: dgt="nineteen"; break;
		case 20: dgt="twenty"; break;
		case 30: dgt="thirty"; break;
		case 40: dgt="forty"; break;
		default: dgt="fifty"; break;
	}

	return dgt;
}

int main(){
	int hr=0, mn=0;
	string hrword="";
	string nxthr="";
	string minword="";

	cin>>hr>>mn;
	hrword=hour(hr);
	
	if(hr==12)
		hr=0;
	
	nxthr=hour(hr+1);

	if(!mn)
		cout<<hrword<<" o' clock\n";
	else if(mn==1)
		cout<<"one minute past "<<hrword<<endl;
	else if(mn<30){
		if(mn==15)
			cout<<"quarter past "<<hrword<<endl;
		else{
			minword=minutes(mn);
			cout<<minword<< "minutes past "<<hrword<<endl;
		}
	}
	else if(mn==30)
		cout<<"half past "<<hrword<<endl;
	else if(mn<58){
		if(mn==45)
			cout<<"quarter to "<<nxthr<<endl;
		else{
			minword=minutes(60-mn);
			cout<<minword<<"minutes to "<<nxthr<<endl;
		}
	}
	else 
		cout<<"one minute to "<<nxthr<<endl;

	return 0;
}