#include<bits/stdc++.h>
using namespace std;

int main(){
    string s, s1;
    cin >> s >> s1;
    
    int found = s1.find(s);

    if(found != -1) cout <<"True" << endl;
    else cout <<"False" << endl;}

