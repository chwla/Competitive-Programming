#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n);
        int totalTwos = 0;

        for (int i = 0; i < n; i++) {
            cin >> a[i];
            if (a[i] == 2) totalTwos++;
        }

        if (totalTwos % 2 == 1) {
            cout << -1 << '\n';
            continue;
        }

        int need = totalTwos / 2;
        int seen = 0;
        int answer = -1;

        for (int i = 0; i < n - 1; i++) {
            if (a[i] == 2) seen++;

            if (seen == need) {
                answer = i + 1;
                break;
            }
        }

        cout << answer << '\n';
    }
}