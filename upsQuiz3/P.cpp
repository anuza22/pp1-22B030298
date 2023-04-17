#include<iostream>
#include<string>
using namespace std;

string strToBool(string str){
    string a="1", b="0";
    if(str==a){
        return "true";
    }else if (str==b){
        return "false";
    } else {
        return str;
    }
}

int main(){
    string str;
    cin >> str;

    cout << strToBool(str);


}