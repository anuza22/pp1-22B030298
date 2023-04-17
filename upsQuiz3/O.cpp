#include<iostream>
#include<vector>
using namespace std;

int main(){
    string s;
    cin >> s;
    int cnt=1, j=0;
    char srr[100000];
    char l;

    vector <int> arr;


    for(int i=0; i<s.size(); i++){
        if(s[i]==s[i+1])cnt++;
        else{
            arr.push_back(cnt);
            cnt=1;
            srr[j]=s[i];
            j++;
        }
    }

    int max = 0;

    for(int i=0; i<arr.size(); i++){
        if(arr[i]>max){
        max=arr[i];
        l = srr[i];
    }}

    cout << l << " " << max;
}