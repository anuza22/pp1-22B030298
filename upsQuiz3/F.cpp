#include<iostream>
using namespace std;

int main(){
    string s;
    cin >> s;

    for(int i=0; i<s.size(); i++){
        if((s[i]>=48 && s[i]<=57) || s[i]>=65 && s[i]<=90)
        continue;
        else
        cout << s[i];
    }
}