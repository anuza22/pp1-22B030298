#include<bits/stdc++.h>
using namespace std;

int main(){
    string s, word="";
    getline(cin, s);
    int i=0;
    
    map <string, int> p;

    while(s[i]!=s[s.size()]){
        if(s[i]!=' '){
          word+=s[i];}
        if(s[i+1]==' ' || s[i+1]==s[s.size()]){
            p[word]++;
            word="";
        }
        i++;
    }

    map<string, int>::iterator it=p.begin();

    for(; it!=p.end(); ++it){
        cout << it->first <<" : " << it->second << endl;
    }


}