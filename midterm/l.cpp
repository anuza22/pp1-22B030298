#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, m, pen;
    cin >> n >> m;
    long int arr[n][m];
    
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin >> arr[i][j];
        }
    }
    cin >> pen;

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(arr[i][j]>pen){
                cout << "Penalty!" << endl;
                return 0;
            }
        }
    }

    cout <<"No penalty for today." << endl;




}