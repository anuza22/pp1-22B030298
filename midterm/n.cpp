#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    string arr[n], s;

    for(int i=0; i<n; i++){
        cin >> s;
        if(i>=n/2){
            reverse(s.begin(), s.end());
            while(1>0){
                if(s[0]=='0')
                s.erase(s.begin());
                else break;
            }
        }arr[i] = s;
    }

    for(int i=0; i<n; i++){
        if(arr[i]!=arr[n-1-i]){
            cout << "NO" << endl;
            return 0;
        }
    }
    cout << "YES" << endl;




}