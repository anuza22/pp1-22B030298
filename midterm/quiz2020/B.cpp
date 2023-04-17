#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	long long int a[n][n];
	
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++)
		cin >> a[i][j];
	}
	
	for(int k=n-1; k>=0; k--){
		int j=k;
		int i=0;
		while (j<=n-1){
			cout << a[i][j] << " ";
			j++;
			i++;
		} cout << endl;
	}
	
	for (int k=1; k<=n-1; k++){
		int i=k;
		int j=0;
		while (i<=n-1){
			cout << a[i][j] << " ";
			i++;
			j++;
		} cout << endl;
	}
	
	
	
	
	
	
	}
