#include<iostream>
#include<string>
using namespace std;

int main(){
    string s, a;
    char sym;

    cin >> s;
    cin >> a;
    cin >> sym;

    for(int i=0; i<s.size(); i++){
        for(int j=0; j<a.size(); j++){
            if(s[i]==a[j]){
                s[i]=sym;
            }
        }
    }

    cout  << s << endl;

}