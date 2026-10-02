#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        long long n, k;
        cin >> n >> k;

        if(n % 2 == 0 || (k % 2 == 1 && k <= n)){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
}