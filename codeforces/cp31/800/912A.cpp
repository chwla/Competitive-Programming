#include <bits/stdc++.h>
using namespace std;

void solve(){
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin>> n>> k;
        vector<int> a(n);
        for(int i = 0; i < n; i++){
            cin>>a[i];
        }
        bool sorted = true;
        for(int i = 1; i < n; i++){
            if(a[i] < a[i-1]){ 
                sorted = false;
                break;
            }
        }
        if(k>1) cout<< "YES\n";
        else if(sorted) cout<< "YES\n";
        else cout<< "NO\n";
    }
}

int main(){
    solve();
    return 0;
}