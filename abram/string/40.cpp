#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    getline(cin, s);
    int first, last, siz;

    for(int i=0; i<s.size(); i++){
        if(s[i]==' ') {first = i; break;} }

    for(int i=s.size()-1; i>0; i--){
        if(s[i]==' ') {last = i; break;} }

    siz = last - first;

    cout <<s.substr(first, siz) << endl;

}