#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, maxi;
    cin >> n;
    int a[n], b[n];
    
    for(int i=0; i<n; i++)
    b[i]=1;

    for(int i=0; i<n; i++)
    cin >> a[i];

    sort(a, a+n);

    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(a[i]==a[j]) b[i]++;
        }
    }

    for(int i=0; i<n; i++){
        maxi = max(b[i], maxi);}

    for(int i=0; i<n; i++){
        if(b[i]==maxi){
            cout << a[i] << " ";
        }
    }




}