#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        long long n;
        cin >> n;

        long long i = 1;
        while(i <= n){
            if(n % i == 0) i++;
            else break;
        }
        cout << i - 1 << endl; 
    }
}