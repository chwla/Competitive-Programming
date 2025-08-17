#include <bits/stdc++.h>
using namespace std;

int main(){
    int x1, x2, x3;
    cin >> x1 >> x2 >> x3;
    vector<int> v = {x1, x2, x3};
    sort(v.begin(), v.end());
    cout << v[2] - v[0] << endl;
    return 0;
}
