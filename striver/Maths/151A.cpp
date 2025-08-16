#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;

    int total_drink = k * l;
    int total_limes = c * d;
    int total_salt = p;

    int toasts_drink = total_drink / nl;
    int toasts_limes = total_limes;
    int toasts_salt = total_salt / np;

    int total_toasts = min({toasts_drink, toasts_limes, toasts_salt});
    cout << total_toasts / n << endl;

    return 0;
}
