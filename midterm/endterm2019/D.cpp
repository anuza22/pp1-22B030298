#include<iostream>
#include<vector>
using namespace std;

int main() {
    int n, cnt = 0;

    vector <int> s;
    vector <int> d;

    for (int i = 0; s.size() != 100; i++) {
        for (int j = 1; j <= i; j++) {
            if (i % j == 0) cnt++;
        }
        if (cnt == 2) {
            s.push_back(i);
        }
    }
    int cnt1 = 0;
    for (int i = 0; i != 100; i++) {
        for (int j = 1; j <= i; j++) {
            if (i % j == 0) cnt1++;
        }
        if (cnt1 == 2) {
            d.push_back(s[i]);
        }
}
    cin >> n;

    cout << d[n - 1] << endl;

}