#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>> t;
    while(t--){
        int n, x;
        cin>>n>>x;
        vector<int> a(n);
        for(int i = 0; i < n; i++){
            cin>>a[i];
        }
        int m = a[0];
        for(int i = 1; i < n; i++){
            m = max(m, a[i]-a[i-1]);
        }
        int final = (abs(x - a[n-1]))*2;
        m = max(final, m);
        cout<<m<<"\n";
    }
    return 0;
}