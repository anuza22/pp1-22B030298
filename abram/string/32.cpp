#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    // - count how many times occurs
    // find(other string, starting_index=0)
    string line;
    string target;
    cin >> target >> line;

    int cnt = 0;
    int found = line.find(target);
    while(found != string::npos){
        cnt++;
        found = line.find(target, found + target.size());
    }

    cout << cnt << endl;

    return 0;
}