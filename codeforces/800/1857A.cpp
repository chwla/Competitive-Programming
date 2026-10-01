#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> a(n);
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        int sum = 0;
        int odd = 0;
        int even = 0;
        for(int i = 0; i < n; i++){
            sum += a[i];
            if(a[i] % 2 == 0) even ++;
            else odd++;
        }
        if(sum % 2 == 0 && (odd > 0 || even > 1)){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
}