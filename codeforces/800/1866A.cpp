#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    int mini = INT_MAX;
    for(int i = 0; i < n; i++){
        cin >> a[i];
        mini = min(mini, abs(a[i])); 
    }
    cout << mini<<endl;
}