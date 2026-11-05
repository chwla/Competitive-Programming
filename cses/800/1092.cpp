#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    long long total = 1LL * n * (n + 1) / 2;

    if (total % 2 != 0) {
        cout << "NO" << endl;
        return 0;
    }

    long long remaining = total / 2;
    vector<int> first, second;

    for (int i = n; i >= 1; i--) {
        if (i <= remaining) {
            first.push_back(i);
            remaining -= i;
        } else {
            second.push_back(i);
        }
    }

    cout << "YES" << endl;

    cout << first.size() << endl;
    for (int x : first) cout << x << ' ';
    cout << '\n';

    cout << second.size() << endl;
    for (int x : second) cout << x << ' ';
    cout << '\n';
}