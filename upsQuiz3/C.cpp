#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, max=0;
    cin >> a;
    int arr[a];

    for (int i=0; i<a; i++){
        cin>>arr[i];
        for (int j=i-1;j>=0;j--)
        {
            if (__gcd(arr[j],arr[i])>max) max=__gcd(arr[j],arr[i]);
        }
    }
    cout<<max;
}