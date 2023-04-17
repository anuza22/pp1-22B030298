#include<bits/stdc++.h>
using namespace std;

bool lowercase(string s){
    for(int i=0; i<s.size(); i++){
        if(isupper(s[i]))
        return false;
    }
    return true;
}

bool check(string s){
    int found = s.find('@');
    for(int i=0; i<found; i++){
        if(s[i]<'a' || s[i]>'z')
        return false;
    }
    return true;
}

bool lastcheck(string s){
    int found = s.find('@');
    string key="";
    for(int i= found; i<s.size(); i++){
        if(s[i]=='.'){
            for(int j=i+1; j<s.size(); j++){
                key+=s[j];
            }
        }
    }
    if(key=="com" || (key=="ru"|| key=="kz")){
        return true;
    } else {
        return false;
    }
}

int main(){
    string s;
    cin >> s;

    if(lowercase( s)){
        if(check( s)){
            if(lastcheck( s)){
                cout << "Yes" << endl;
            } else cout << "no" << endl;
        } else cout << "no" << endl;
    }else cout << "no" << endl;
}
