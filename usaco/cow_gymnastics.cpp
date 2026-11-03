#include <bits/stdc++.h>
using namespace std;

int main() {
    ifstream fin("gymnastics.in");
    ofstream fout("gymnastics.out");

    int k, n;
    fin >> k >> n;

    vector<vector<int>> pos(k, vector<int>(n + 1));

    for (int i = 0; i < k; i++) {
        for (int rank = 0; rank < n; rank++) {
            int cow;
            fin >> cow;
            pos[i][cow] = rank;
        }
    }

    int answer = 0;

    for (int cow1 = 1; cow1 <= n; cow1++) {
        for (int cow2 = 1; cow2 <= n; cow2++) {
            if (cow1 == cow2) continue;

            bool consistent = true;

            for (int i = 0; i < k; i++) {
                if (pos[i][cow1] > pos[i][cow2]) {
                    consistent = false;
                    break;
                }
            }

            if (consistent) answer++;
        }
    }

    fout << answer << endl;
}