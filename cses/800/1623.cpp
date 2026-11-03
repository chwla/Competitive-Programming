#include <bits/stdc++.h>
using namespace std;


long long ans(int i, long long sum, long long total, vector<int> &p){
    if(i == p.size()){
        return llabs(sum - (total-sum));
    }
    
    return min(ans(i+1, sum+p[i], total, p), ans(i+1, sum, total, p)); 
}

int main(){
    int n;
    cin >> n;
    vector<int> p(n);
    long long total = 0;
    for(int &x : p) {cin >> x; total += x;}
    cout << ans(0, 0, total, p) << endl;
}