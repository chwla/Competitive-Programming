#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    int max_h = *max_element(a.begin(), a.end());
    int min_h = *min_element(a.begin(), a.end());

    int max_index = -1, min_index = -1;
    for (int i = 0; i < n; i++) {
        if (a[i] == max_h && max_index == -1) max_index = i;
        if (a[i] == min_h) min_index = i; 
    }

    int ans = max_index + (n - 1 - min_index);
    if (max_index > min_index) ans--;
    cout << ans << endl;
}
