#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, a, cnt=0;
    cin >> n;
    map <int, int> s;

    for(int i=0; i<n; i++){
        cin >> a;
        s[a]++;
    }

    map <int, int>::iterator it;

    for(it=s.begin(); it!=s.end(); ++it){
        if(it->second>=2) cnt++;
    }
    cout << cnt  << endl;


}