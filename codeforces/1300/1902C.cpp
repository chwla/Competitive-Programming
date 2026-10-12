#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;

        vector<long long> a(n);

        for(int i = 0; i < n; i++) cin >> a[i];

        if(n == 1){
            cout << 1 << endl;
            continue;
        }

        sort(a.begin(), a.end());

        long long g = 0;

        for(int i = 1; i < n; i++){
            g = gcd(g, a[i]-a[i-1]);
        }

        long long mx = a[n-1];
        long long ans = 0;

        for(int i = 0; i < n; i++){
            ans += (mx - a[i]) / g;
        }

        long long extra = 1;

        for(int i = n-2; i >=0; i--){
            if(a[i] == mx - extra * g) extra++;
            else break;
        }
        ans += extra;

        cout << ans << endl;
    }
}