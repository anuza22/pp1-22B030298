//Loop-square
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, m, x;
    cin >> n >> m >> x;
    n=ceil(sqrt(n));
    m=floor(sqrt(m));

    while(1>0){
        if(x==1){
           if(n<=m){
            cout << pow(n, 2) << " ";
            n++;}
            if(n>m) return 0;}

        if(x==-1){
           if(n<=m){
            cout << pow(m, 2) << " ";
            m--;}
            if(n>m) return 0;}
    }
    }