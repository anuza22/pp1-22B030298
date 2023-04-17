#include<bits/stdc++.h>
using namespace std;

int main(){
    string s, s1, s2;
    cin >> s >> s1;
    getline(cin, s2);

    int found = s2.find(s);

    if(found != string::npos){
        s2.replace(found, s.size(), s1);
    }

    cout << s2 << endl;
}