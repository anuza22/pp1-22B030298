//Perfect matrix or not?
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    long long int arr[n][n];
    bool yep = false;

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin >> arr[i][j];
        }
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(arr[i][j]==arr[j][i]){
                yep = true;
            } else {
                cout << "Not perfect." << endl;
                return 0;
            }}}

    if(yep==true)
    cout <<"Perfect." << endl;


}