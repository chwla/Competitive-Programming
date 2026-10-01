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

        int operations = 0;

        int sum = 0;
        int prod = 1;

        for(int i = 0; i < n; i++){
            sum += a[i];
            prod *= a[i];
        }

        while(sum < 0){
            sum = sum + 2;
            operations++;
        }

        if((prod < 0) && (operations % 2 == 0)) operations++;
        else if((prod > 0) && (operations % 2 == 1)) operations++;

        cout << operations << endl;
    }
}