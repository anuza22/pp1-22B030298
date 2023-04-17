#include<bits/stdc++.h>
using namespace std;

int main(){
    string s, word = "";
    getline(cin, s);

    vector<string> dep;

    for(int i=0; i<s.size(); i++){
        word = word + s[i]; 
        if(s[i]==' ' || (i+1)==s.size()){
            dep.push_back(word);
            word = "";}
    }
    sort(dep.begin(), dep.end());

   /* for(int i=0; i<dep.size(); i++){
        cout << dep[i] <<" ";
    }*/
    int cnt = 1;
    int arr[dep.size()];

    for(int i=0; i<dep.size(); i++)
    arr[i]=1;

    for(int i=0; i<dep.size(); i++){
        for(int j=i+1; j<dep.size(); j++){
            if(dep[i]==dep[j]) arr[i]++;
        }
    }

    int max=0;
    for(int i=0; i<dep.size(); i++){
        if(arr[i]>max) max=arr[i];}
    cout << endl;
    for(int i=0; i<dep.size(); i++){
        if(arr[i]==max){
            cout << dep[i] << "-" << arr[i] << endl;;
        }
    }

}