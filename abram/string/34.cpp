#include<bits/stdc++.h>
using namespace std;

int main(){
    string s, s1;
    cin >> s;
    getline(cin, s1);
    int found = s1.rfind(s);

    if(found != string::npos)
    s1.erase(found, s.size()+1);

    cout << s1 << endl;
}