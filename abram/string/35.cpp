//#include<bits/stdc++.h>
using namespace std;

int main(){
    string line, s;
    cin >> s;
    getline(cin, line);

    int found = line.find(s);

    while(found != string::npos){
       found = line.find(s, found + s.size());
       line.erase(found,s.size());
    }

    cout << line << endl;}