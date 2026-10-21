#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> freq(n+1, 0);
        for(int i = 0; i < n; i++){
            int x;
            cin >> x;
            if(x <= n) freq[x]++;
        }

        vector<int> count(n+1, 0);
        for(int i = 1; i <= n; i++){
            for(int j = i; j <= n; j += i){
                count[j] += freq[i];
            }
        }
        int ans = *max_element(count.begin(), count.end());
        cout << ans << endl;
    }
}