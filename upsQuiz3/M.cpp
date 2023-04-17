#include<iostream>
using namespace std;

int main(){
    string s;
    cin >> s;
    int sum=0;

    for(int i=0; i<s.size(); i++){
        sum+=s[i];
    }

    if(sum>300){
        cout << "It is tasty!" << endl;
    } else{
        cout << "Oh, no!" << endl;
    }
}