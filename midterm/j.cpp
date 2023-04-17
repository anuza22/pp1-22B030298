#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    int max=48, min = 57;

    for(int i=0; i<s.size(); i++){
        if(s[i]>max) max=s[i];
        if(s[i]<min) min=s[i];
    }
    cout << char(max) <<" "<< char(min) << endl;
}