#include<bits/stdc++.h>
using namespace std;

bool check(vector <pair<pair <string, string>>, int> m1, vector <pair<pair <string, string>>, int> m2){
    if(m1.first.first<m2.first.first) return true;

    if(m1.first.first>m2.first.first) return false;

    if(m1.first.second<m2.first.second) return true;

    if(m1.first.second>m2.first.second) return false;

    if(m1.second<m2.second) return true;

    if(m1.second<m2.second) return false;
   
}

int main(){
    vector <pair<pair <string, string>>, int> m;
    int n;
    cin >> n;

    for(int i=0; i<n; i++){
        string name, surn;
        int age;
        cin >> name >> surn >> age;
        m.first.first = name;
        m.first.second = surn;
        m.second = age;
    }

    sort(m.begin(), m.end(), check );

    for(int i=0; i<n; i++){
        cout << m[i].first.first  << " "
        << m[i].first.second <<" "
        << m[i].second  << endl;
    }

     }