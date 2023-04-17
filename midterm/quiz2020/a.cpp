#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, cnt=0, j=0;
	cin >> n;
	long long int a[n];
	
	for(int i=0; i<n; i++)
	cin >> a[i];
	
	sort(a, a+n);
	
	for(int i=0; i<n; i++){
		while(a[i]+j == a[i+1]){
			j++;
		}
	}
	
	cout << j << endl;
	
	
	
	
}
