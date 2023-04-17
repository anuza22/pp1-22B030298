#include<iostream>
#include <vector>
using namespace std;

int check (int n, int n1, vector<int>&a, vector<int>&b){
    int cnt=0;
    for(int i=0; i<a.size(); i++){
        if((n==a[i] && n1==b[i]) || (n1==a[i] && n==b[i])){
            cnt++;
        }
    }
    return cnt-1;
}

int main(){
    int n;
     cin >> n;
    vector <int> a;
    vector <int> b;
    int arr[n];

     for(int i=0; i<n; i++){
        int n, n1;
        cin >> n >> n1;
        a.push_back(n);
        b.push_back(n1);
        arr[i]=(check(n, n1, a, b));
     }
     cout << "0" << endl;
     for(int i=1; i<n; i++)
     cout << arr[i] << endl;
}