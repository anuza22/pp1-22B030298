#include<bits/stdc++.h>
#include<vector>
using namespace std;

int main(){
    int n;
    string s;
    cin >> s;

    vector<string> dep;

    if(n<s.size()){
         for(int i=s.size()-1; i>=n-1; i--){
             dep.push_back(s[i]);
            }
        for(int j=dep.size()-1; j>=0; j--){
        cout << dep.at(j);}
           return 0;}
    if(n>s.size()){
        for(int i=s.size()-1; ; i--){
            dep.push_back(s[i]);
            n--;
            if(i<0 && n<s.size()){
                dep.push_back(".");
            }}
            for(int j=dep.size()-1; j>=0; j--){
            cout << dep.at(j);}
           return 0;}

   
    
}