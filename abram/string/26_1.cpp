#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    int j=0, siz = s.size();

    if(n>s.size()){
        for(int i=0; i<n; ){
            if(siz<n){cout<<"."; siz++;}
            else {cout<<s[i]; i++;}
        }
        return 0;}

    if(n<s.size()){
        for(int i=0; i<n; i++){
            cout <<s[i];
        }return 0;
    }
}