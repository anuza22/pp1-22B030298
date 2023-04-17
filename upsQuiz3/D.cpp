#include<iostream>
#include<string>
using namespace std;

string alf="0123456789ABCDEF";
string s="";

string dexToHex(int n){
    if(n==0) return s;
    if(n%16>9){
        s = alf[n%16] + s;
    }else{
        s = char(n % 16 + 48) + s;
    }
    return dexToHex(n/16);

}

int main(){
    int  n;
    cin >> n;

    cout << dexToHex(n) <<endl;

}