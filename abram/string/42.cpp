#include<bits/stdc++.h>
using namespace std;

int main(){
    string line;
    getline(cin, line);
    string word;
    int cnt=0;

    for(int i=0; i<line.size(); i++){
        if(line[i]!=' ')
           word = word +line[i];
        if(line[i+1]==' ' || (i+1)==line.size()){
            if(word[0]==word[word.size()-1])
            cnt++;
            word = "";
        }
    }

    cout << cnt << endl;
}
    




