//max word
#include<iostream>
using namespace std;

int main(){
    string s, word="", l;
    getline(cin, s);
    int max=0;

    for(int i=0; i<s.size(); i++){
        if(s[i]==' ') continue;
        word+=s[i];
        if(s[i+1]==' ' || s[i+1]==s.size()){
            if(word.size()>max){
                max = word.size();
                l=word;
            }
            word="";

        }

    }
    cout << l << endl;
}