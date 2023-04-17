#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

int main(){
    string s;
    getline(cin, s);
    int n;
    cin >> n;
    char arr[n];

    for(int i=0; i<n; i++)
    cin >> arr[i];

    sort(arr, arr+n);
    sort(s.begin(), s.end());

    int brr[n], i=0, cnt=0;
    for(int i=0; i<n; i++)
    brr[i]=0;

    for(int j=0; j<n; j++){
        for(int i=0; i<s.size(); i++){
           if(s[i]==' ') continue;
           if(arr[j]==s[i]) brr[j]++;
    }}

    for(int j=0; j<n; j++){
        cout << arr[j] <<" - " << brr[j] << endl;
    }
}