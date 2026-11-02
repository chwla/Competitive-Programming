#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    int freq[26] = {};
    for (char c : s) {
        freq[c - 'A']++;
    }

    int oddCount = 0;
    char oddChar = '\0';

    for (int i = 0; i < 26; i++) {
        if (freq[i] % 2 == 1) {
            oddCount++;
            oddChar = 'A' + i;
        }
    }

    if (oddCount > 1) {
        cout << "NO SOLUTION\n";
        return 0;
    }

    string left;
    for (int i = 0; i < 26; i++) {
        left.append(freq[i] / 2, 'A' + i);
    }

    string right = left;
    reverse(right.begin(), right.end());

    cout << left;
    if (oddCount == 1) {
        cout << oddChar;
    }
    cout << right << '\n';
}