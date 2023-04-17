#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int n, n1; 
    cin >> n;
    int arr[n];
    vector <int> set;

    for(int i=0; i<n; i++) {
        cin >> arr[i];
        set.push_back(arr[i]);
    }

    cin >> n1;
    int brr[n1];
    for(int i=0; i<n1; i++){
        cin >> brr[i];
        set.push_back(brr[i]);
    }
    sort(set.begin(), set.end());

    for(int i=0; i<set.size(); i++){
        cout << set[i] << " ";
    }

}
