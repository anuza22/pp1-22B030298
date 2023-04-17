#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){
    string s, k;
    cin >> s;
    cin >> k;

    int found = s.find(k);
    while(found != string::npos){
        cout << found << " ";
        found = s.find(k, found+1);
    }
}