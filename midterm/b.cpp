#include<bits/stdc++.h>
using namespace std;

int main(){
    int w, h, x1, x2, y1, y2, n;
    cin >> w >> h;
    long long arr[w][h];

    for(int i=0; i<w; i++){
        for(int j=0; j<h; j++){
            arr[i][j]=1;
        }
    }

    cin >> n;
    for(int i =0; i<n; i++){
        cin >> x1>> y1>> x2>> y2;
        for(int j=x1; j<x2; j++){
            for(int k=y1; k<y2; k++){
                arr[j][k]=0;
            }
        }
    }
    int cnt=0;

    for(int i=0; i<w; i++){
        for(int j=0; j<h; j++){
            if(arr[i][j]==1) cnt++;   
        }
    }

    cout << cnt << endl;

}