#include<bits/stdc++.h>
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
        int operations = 0;
        if(n == 1){
            cout << operations << endl;
            continue;
        }

        for(int i = 1; i < n; i++){
            if(a[i] % 2 == a[i-1] % 2) operations++;
        }

        cout << operations << endl;

    }
}