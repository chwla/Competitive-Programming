#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        for(int i = 0; i < n; i++) cin >> a[i];

        sort(a.begin(), a.end());
        int count = 0;
        int mx = 0;
        for(int i = 1; i < n; i++){
            if(a[i] - a[i-1] <= k){
                count++;
                mx = max(count, mx);
            }
            else count = 0;
        }

        cout << n - (mx + 1) << endl;
    }
}