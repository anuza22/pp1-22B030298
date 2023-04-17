#include<iostream>
#include<map>
using namespace std;
int main(){
    map <int, int> m;
    int n;
    cin >> n;

    for(int i=0; i<n; i++){
        int a;
        cin >> a;
        m[a]++;
    }

    auto end = m.end();
    --end;
    cout << end->second;
    


}
