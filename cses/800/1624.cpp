#include <bits/stdc++.h>
using namespace std;

string board[8];
int queenColumn[8];
int ways = 0;

void search(int row) {
    if (row == 8) {
        ways++;
        return;
    }

    for (int col = 0; col < 8; col++) {
        if (board[row][col] == '*') continue;

        bool valid = true;

        for (int previousRow = 0; previousRow < row; previousRow++) {
            int previousCol = queenColumn[previousRow];

            if (previousCol == col ||
                abs(previousCol - col) == abs(previousRow - row)) {
                valid = false;
                break;
            }
        }

        if (valid) {
            queenColumn[row] = col;
            search(row + 1);
        }
    }
}

int main() {
    for (int i = 0; i < 8; i++) {
        cin >> board[i];
    }

    search(0);
    cout << ways << '\n';
}