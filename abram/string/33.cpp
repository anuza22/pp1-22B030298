#include<bits/stdc++.h>
using namespace std;

int main(){
    string line, s;
    cin >> s;
    getline(cin, line);

    int found = line.find(s);

    if(found != string::npos){
        line.erase(found, s.size());
    }

    cout << line << endl;
}