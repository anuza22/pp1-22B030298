#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    string s;
    char t;
    cin >> s;
    cin >> t;

    int found1 = s.find(t);
    int found2 = s.rfind(t);

    if(found1 != -1){
        if(found1==found2){
            cout << found1 << endl;
        } else {
            cout << found1 << " " << found2 << endl;
        }
    }
}