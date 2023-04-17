#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    int first = s[0]-48;
    int SumOfDigits=0;

    for(int i=1; i<s.size(); i++){
        SumOfDigits+=(s[i]-48);
    }
    
    if(first==SumOfDigits%10){
        cout <<"YES" << endl;
    } else
    cout << "NO" << endl;
}