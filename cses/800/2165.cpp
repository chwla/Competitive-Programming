#include <bits/stdc++.h>
using namespace std;

void hanoi(int n, char from, char to, char aux){
    if(n == 0) return;

    hanoi(n-1, from, aux, to);
    cout << from << " " << to << endl;
    hanoi(n-1, aux, to, from);
}

int main(){
    int n;
    cin >> n;

    cout << (1LL << n) -1 << endl;
    hanoi(n, '1', '3', '2');
}