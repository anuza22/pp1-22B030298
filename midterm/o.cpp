#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    long int arr[n][m], b[n];
    
    for(int i=0; i<n; i++){
        b[i]=0;
        for(int j=0; j<m; j++){
            cin >> arr[i][j];
            b[i]+=arr[i][j];
        }
    }

    for(int i=0; i<n; i++){
        cout << floor(b[i]/m) <<" ";}



}