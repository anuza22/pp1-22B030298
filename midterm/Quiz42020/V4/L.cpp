#include<bits/stdc++.h>
using namespace std;

int main(){
    multimap <int, int> s;
    int n;
    cin >> n;

    for(int i=0; i<n; i++){
        int a, b, sum;
        cin >> a >> b;
        sum=a+b;
        s.insert(make_pair(sum, i+1));
    }
    multimap <int, int> ::iterator it;
    for(it=s.begin(); it!=s.end(); ++it){
        cout <<it->second << " ";
    }
    
}