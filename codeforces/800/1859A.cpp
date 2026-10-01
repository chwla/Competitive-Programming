#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(n);
        for(int i = 0; i < n; i++){
            cin>>a[i];
        }
        vector<int> b;
        vector<int> c;
        int mn = *min_element(a.begin(), a.end());
        for(int i = 0; i < n; i++){
            if(a[i] == mn) b.push_back(a[i]);
            else c.push_back(a[i]);
        }

        int lb = b.size();
        int lc = c.size();

        if(!c.empty()) {
            cout << lb << " " << lc << "\n";
            for(int i = 0; i < lb; i++) cout << b[i] << " ";
            cout<<'\n';
            for(int i = 0; i < lc; i++) cout << c[i] << " ";
        }
        else cout << -1 << '\n';
    }
}