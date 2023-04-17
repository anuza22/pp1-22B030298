#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
string alf = "abcdefghijklmnopqrstuvwxyz";

int main(){
    string s;
    cin >> s;
    
    for(int i=0; i<s.size(); i++){
        int found = alf.find(s[i]);
        cout << alf[25-found];
    }
}