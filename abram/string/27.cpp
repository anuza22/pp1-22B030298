#include<bits/stdc++.h>
using namespace std;

int main(){
    int n1, n2;
    cin >> n1>> n2;
    string s1, s2;
    cin >> s1 >>s2;

    for(int i=0; i<n1; i++){
        cout << s1[i];
    }
    int j = s2.size()-n2;
    
    for(int i = 0; i<n2; i++){
        cout << s2[j];
        j++;
    }

    return 0;}

