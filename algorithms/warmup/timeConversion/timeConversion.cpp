
/*
	SOLVED: May 2016

	Modified: 12/21/2016
	too lazy to turn this into a more c like
	representation, substr makes life easier
	right now
*/

#include <iostream>

using namespace std;

void convert(string time);

int main(){
    string time;
    cin >> time;
    convert(time);
    return 0;
}

void convert(string time){
    string hour=time.substr(0,2);
    string status=time.substr(8,9);
    string mil="";
    int twelve=hour.compare("12");

    if(!status.compare("PM")&&twelve){
        mil+=(hour[0]+1);
        mil+=(hour[1]+2);
        mil+=time.substr(2,6);
    }
    else if(!status.compare("AM")&&!twelve){
        mil+="00"+time.substr(2,6);
    }
    else
        mil=time.substr(0,8);
    
    cout<<mil<<endl;
}
