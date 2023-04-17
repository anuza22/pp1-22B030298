//Maximum product of two elements.
#include<bits/stdc++.h>
using namespace std;


int main(){
    int n;
    cin >> n;
    int a[n];

    for(int i=0; i<n; i++)
    cin >> a[i];

    sort(a, a+n);

    /*int max = a[0];

    for(int i=1; i<n; i++){
        if(a[i]>max) max = a[i];
    }

    int secondmax = a[0];

    for(int i=1; i<n; i++){
        if(a[i]>secondmax && a[i]<max) secondmax = a[i];
    }*/


    cout << a[n-1]*a[n-2] << endl;
}