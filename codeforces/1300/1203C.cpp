#include <bits/stdc++.h>
using namespace std;

int main(){
    long long n;
    cin >> n;

    long long g = 0;
    for(long long i = 0; i < n; i++){
        long long x;
        cin >> x;
        g = gcd(g, x);
    }
    long long count = 0;

    for(long long i = 1; i <= g/i; i++){
        if(g % i == 0){
            if(i == g / i) count++;
            else count += 2;
        }
    }

    cout << count << endl;
}