#include<iostream>
#include<string>
#include<cmath>
using namespace std;

int toBinary (string s, int i, int n){
    if(i==s.size()) return n;
    n=n+((s[s.size()-1-i]-'0')*pow(2, i));

    return toBinary(s, i+1, n);
}

int main(){
    string s;
    cin >> s;
    int i=0, n=0;
   
    cout << toBinary(s, i, n) << endl;

}