#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    freopen("herding.in", "r", stdin);
    freopen("herding.out", "w", stdout);

    int cows[3];
    cin >> cows[0] >> cows[1] >> cows[2];

    sort(cows, cows + 3);

    int leftGap = cows[1] - cows[0];
    int rightGap = cows[2] - cows[1];

    int minimumMoves;

    if (leftGap == 1 && rightGap == 1) {
        minimumMoves = 0;
    } else if (leftGap == 2 || rightGap == 2) {
        minimumMoves = 1;
    } else {
        minimumMoves = 2;
    }

    int maximumMoves = max(leftGap, rightGap) - 1;

    cout << minimumMoves << '\n';
    cout << maximumMoves << '\n';

    return 0;
}