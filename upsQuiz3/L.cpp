#include<iostream>
using namespace std;

int main(){
    string s;
    getline(cin, s);

    for(int i=0; i<s.size(); i++){
        if((s[i]>='A' && s[i]<='Z') || (s[i]>='a' && s[i]<='z')){
            if(s[i] == 'z') s[i] = 'a';
            else if(s[i] == 'Z') s[i] = 'A';
            else s[i] = char(s[i]+1);
        }
    }

    cout << s << endl;
}