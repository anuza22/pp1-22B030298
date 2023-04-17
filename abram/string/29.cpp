#include<bits/stdc++.h>
using namespace std;

int main(){
    char c;
    string s, s1;
    cin >> c >> s >> s1;
    int j=1;

    for(int i=0; i<s.size(); i++){
        if(s[i]==c)
        cout << s1;
        cout << s[i];
        j++;
    }
}