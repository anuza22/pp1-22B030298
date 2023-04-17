#include<bits/stdc++.h>
using namespace std;

int main(){
    string s, word="";
    getline(cin, s);
    vector <string> w;
    pair <string, int> p;
    int i=0;

    while(s[i]!=s[s.size()]){
        word+=s[i];
        if(s[i]==' ' || s[i]==s[s.size()-1]){
            w.push_back(word);
            word="";
        }
        i++;
    }

    sort(w.begin(), w.end());
    int cnt[w.size()];

    for(int i=0; i<w.size(); i++)
    cnt[i]=1;

    for(int i=0; i<w.size(); i++){
        for(int j=i+1; j<w.size(); j++){
           if(w[i]==w[j]) cnt[i]++;}
    }

    for(int i=0; i<w.size(); i++){
        int j=i+1;
        if(w[i]!=w[j]){
            p[w[i]]=cnt[i];
        } 
    }

    for(pair <string, int>::iterator it=p.begin(); it!=p.end(); ++it){
        cout << *it.first <<" : " << *it.second << endl;
    }


}