#include<bits/stdc++.h>
using namespace std;

int main(){
    freopen("shell.in", "r", stdin);
    freopen("shell.out", "w", stdout);
    
    int n;
    cin >> n;
    vector<int> a(n), b(n), g(n);

    for(int i = 0; i < n; i++){
        cin >> a[i] >> b[i] >> g[i];
    }

    int best = 0;

    for(int i = 1; i <= 3; i++){
        int pebble = i;
        int score = 0;

        for(int j = 0; j < n; j++){
            if(pebble == a[j]) pebble = b[j];
            else if (pebble == b[j]) pebble = a[j];

            if (pebble == g[j]) score++;
        }
        best = max(score, best);
    }

    cout << best<< endl;
}