#include<bits/stdc++.h>
using namespace std;

int main(){
    long long int a, b;
    cin >> a >> b;
    int n = -60;

    for(; n<=60; n++){
        if(a*pow(2, n)==b){
            cout <<"YES " <<  n << endl;
            return 0;
        } 
    }
    cout << "NO" << endl;
}