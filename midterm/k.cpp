#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, x, cnt=0;
    cin >> n;
    long int a[n], b[n];

    for(int i=0; i<n; i++)
    cin >> a[i];

    for(int i=0; i<n; i++)
    cin >> b[i];

    cin >> x;

     for(int i=0; i<n; i++){
        if(x>=a[i] && x<=b[i])
        cnt++;
     }

     cout << cnt << endl;

    


}