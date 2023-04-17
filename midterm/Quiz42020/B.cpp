#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){
    int l, r, cnt=1;
    cin >> l >> r;
    
    for(; l<=r; l++){
        string ls = to_string(l);
        sort(ls.begin(), ls.end());
        cnt=1;
        for(int i=0; i<ls.size()-1; i++){
            if(ls[i]!=ls[i+1])cnt++;
            if(cnt==ls.size()){
                cout << l << endl;
                return 0;
            }
        }
    }

    cout << "Understandable, have a great day" << endl;


}