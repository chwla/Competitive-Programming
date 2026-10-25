#include <bits/stdc++.h>
using namespace std;

int main() {
    const int N = 1e6;
    vector<int> sum(N + 1, 0);

    for (int i = 1; i <= N / 2; i++) {
        for (int j = 2 * i; j <= N; j += i) {
            sum[j] += i;
        }
    }

    int t;
    cin >> t;

    while (t--) {
        int x;
        cin >> x;

        if (sum[x] == x)
            cout << "perfect\n";
        else if (sum[x] > x)
            cout << "abundant\n";
        else
            cout << "deficient\n";
    }

    return 0;
}
