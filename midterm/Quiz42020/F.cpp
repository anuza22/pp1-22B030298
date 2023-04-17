// sum of two elements
#include<iostream>
using namespace std;

int check (int n, int a, int(&arr)[]){
    for(int j=0; j<n; j++){
            for(int k=j+1; k<n; k++){
                if(arr[j]+arr[k]==a){
                    cout << "YES" << endl;
                    break;}
            }
    }
    cout << "NO" << endl;
                
}

int main(){
    int n, m;
    cin >> n; 
    int arr[n];

    for(int i=0; i<n; i++)
        cin >> arr[i];

    cin >> m;
    int brr[m];

    for(int i=0; i<m; i++)
       cin >> brr[i];

    for(int i=0; i<m; i++){
        check(n, brr[i], arr);
      
        }
    }
    
    

