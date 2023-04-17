#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    getline(cin, s);
    int cnt = 1;

    for(int i=0; i<s.size(); i++){
        if(s[i]==' ' && s[i+1]==' '){
            s.erase(i, 1);
            i--;
        }
    }

    for(int i=0; i<s.size(); i++){
        if(s[i]==' ')
        cnt++;}

    cout << cnt << endl;


}