#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, x;
    cin >> n >> x;

    vector<int> p(n);
    for (int &weight : p) {
        cin >> weight;
    }

    sort(p.begin(), p.end());

    int left = 0;    
    int right = n - 1; 
    int ans = 0;

    while (left <= right) {
        if (p[left] + p[right] <= x) {
            left++; 
        }
        right--;  
        ans++;
    }

    cout << ans << '\n';
}