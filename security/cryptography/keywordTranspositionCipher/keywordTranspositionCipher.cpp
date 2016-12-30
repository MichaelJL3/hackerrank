
/*
    SOLVED: 12/29/2016

    Dont be scared its a lot of loops but of very tiny sizes
*/

#include <cstdio>
#include <iostream>
#include <cmath>

using namespace std;

int main(){
    string cipher, key, filtered;
    int iter, keyLen, cipherLen, rows, counter, pos;
    char freq[91];
    char c;
    char *temp;
    char **map;

    scanf("%d", &iter);
    for(int i=0; i<iter; i++){
        cin>>key;
        cin.ignore(256, '\n');
        getline(cin, cipher);
        
        filtered="";
        counter=65;
        keyLen=key.length();
        cipherLen=cipher.length();

        for(int j=65; j<91; j++)
            freq[j]=0;

        for(int j=0; j<keyLen; j++)
            freq[key[j]]=1;

        for(int j=0; j<keyLen; j++){
            c=key[j];
            if(freq[c]>0){
                filtered+=c;
                freq[c]=-1;
            }
        }

        keyLen=filtered.length();
        map=new char*[keyLen];
        rows=ceil(26.0/keyLen);
        for(int j=0; j<keyLen; j++){
            map[j]=new char[rows];
            map[j][0]=filtered[j];
        }

        for(int j=1; j<rows; j++){
            for(int k=0; k<keyLen; k++){
                while(freq[counter]==-1)
                    counter++;
                map[k][j]=counter++;
            }
        }

        for(int j=0; j<keyLen; j++){
            for(int k=0; k<rows; k++){
                c=map[j][k];
            }
        }

        key="";
        for(int j=65; j<91; j++){
            if(freq[j]==-1)
                key+=j;
        }

        for(int j=0; j<keyLen; j++){
            pos=filtered.find(key[j]);
            c=filtered[pos];
            filtered[pos]=filtered[j];
            filtered[j]=c;
            temp=map[pos];
            map[pos]=map[j];
            map[j]=temp;
        }

        counter=65;
        for(int j=0; j<keyLen; j++){
            for(int k=0; k<rows; k++){
                c=map[j][k];
                if(c<='Z')
                    freq[c]=counter++;
            }
            delete map[j];
        }
        delete map;

        for(int j=0; j<cipherLen; j++){
            c=cipher[j];
            if(c>='A'&&c<='Z')
                cipher[j]=freq[c];
        }

        cout<<cipher<<"\n";
    }

    return 0;
}
