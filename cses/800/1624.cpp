#include <bits/stdc++.h>
using namespace std;

bool is_safe(const vector<string>& board, int r, int c) {
    if (board[r][c] == '*') return false;

    for (int j = c - 1; j >= 0; j--) {
        if (board[r][j] == 'Q') return false;
    }

    for (int i = r - 1, j = c - 1; i >= 0 && j >= 0; i--, j--) {
        if (board[i][j] == 'Q') return false;
    }

    for (int i = r + 1, j = c - 1; i < 8 && j >= 0; i++, j--) {
        if (board[i][j] == 'Q') return false;
    }

    return true;
}

void solve(vector<string>& board, int c, int& answer) {
    if (c == 8) {
        answer++;
        return;
    }

    for (int r = 0; r < 8; r++) {
        if (is_safe(board, r, c)) {
            board[r][c] = 'Q';
            solve(board, c + 1, answer);
            board[r][c] = '.';
        }
    }
}

int main() {
    vector<string> board(8);

    for (string& row : board) {
        cin >> row;
    }

    int answer = 0;
    solve(board, 0, answer);

    cout << answer << '\n';
}