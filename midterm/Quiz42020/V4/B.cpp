#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    int n;
    getline(cin, s);
    cin >> n;

    s.erase(0, n);
    cout << s << endl;
}