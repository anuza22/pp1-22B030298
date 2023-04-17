#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

int main(){
    int n;
    cin >> n;
    string arr[n], s, l="";
    string k="@gmail.com";

    for(int i=0; i<n; i++){
        cin >> s;
        int j=0;
        int found = s.find(k);
        if (found!=-1){
            while(s[j]!='@'){
                l=l+s[j];
                j++;
            }
            arr[i]=l;
            l="";
        }
        }

    string a="";
        
    for(int i=0; i<n; i++){
        if(arr[i]==a) continue;
        cout << arr[i] << endl;
    }




}