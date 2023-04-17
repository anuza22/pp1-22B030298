// powerfull hero
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    long int arr[n];

    for(int i=0; i<n; i++)
    cin >> arr[i];

    int ev=0, od=0, sumev=0, sumod=0;
    if(n==0){
        cout << "Left hand magic power: 0" << endl;
        cout << "Right hand magic power: 0" << endl;
        return 0;
    }

    for(int i=0; i<n; i++){
        if(arr[i]%2==0){
            ev++;
            sumev+=arr[i];
        } else{
            od++;
            sumod+=arr[i];
        }
    }
    
    cout << "Left hand magic power: " << sumev*ev << endl;
    cout << "Right hand magic power: " << sumod*od << endl;

    

}