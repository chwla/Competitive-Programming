#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<long long> b(n);

        for (int i = 0; i < n; i++) {
            cin >> b[i];
        }

        long long x = 1;

        for (int i = 0; i < n - 1; i++) {
            if (b[i + 1] % b[i] != 0) {
                long long g = gcd(b[i], b[i + 1]);
                long long need = b[i] / g;

                x = lcm(x, need);
            }
        }

        cout << x << '\n';
    }

    return 0;
}
