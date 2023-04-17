#include<bits/stdc++.h>
using namespace std;

int main(){
    string s, subs;
    getline(cin, s);


    for(int i=0; i<s.size(); i++){
        if(s[i]==' '){
            i++;
            while(s[i]!=' '){
                cout <<s[i];
                i++;
            }return 0;
        }
    }
}