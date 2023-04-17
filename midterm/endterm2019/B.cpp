#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
     cin >> s;

    if(s.size()%2!=0){
        cout <<"-1" << endl;
        return 0;
    }
    int cntUp=0, cntLow=0;
    for(int i=0; i<s.size(); i++){
        if(islower(s[i])) cntLow++;
        else cntUp++;
    }
    if(cntUp>cntLow){
        cout << 2*(cntUp-(s.size()/2)) << endl;
    }else if(cntLow>cntUp){
        cout << (cntLow-(s.size()/2)) << endl;
    }else {
        cout << "0" << endl;
    }
}