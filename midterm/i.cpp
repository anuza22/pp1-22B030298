#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, max = 0;
    cin >> n;
    long long int a[n][n], arr[n];


    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin >> a[i][j];
            if(a[i][j]>max) max = a[i][j];
        } arr[i] = max; 
        max = 0;
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout << arr[i] << " ";
        }cout << endl;}

    
    



}