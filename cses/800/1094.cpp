#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    long long prev, x, moves = 0;
    cin >> prev;

    for (int i = 1; i < n; i++) {
        cin >> x;

        if (x < prev) {
            moves += prev - x;
        } else {
            prev = x;
        }
    }

    cout << moves << endl;
}