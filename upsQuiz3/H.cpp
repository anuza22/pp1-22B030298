#include<iostream>
using namespace std;

int main(){
    int n;
    double p, q;
    cin >> n;
    string s, srr[n];
    double arr[n];

    for (int i=0; i<n; i++){
        cin >> s >> p >> q;
        srr[i]=s;
        arr[i]=q/p;
    }
    double max=0;
    string name;

    for(int i=0; i<n; i++){
        if(arr[i]>max){
            max=arr[i];
            name=srr[i];
        }
    }

    cout << name << endl;
}

