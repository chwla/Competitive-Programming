#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int a, b, c;
        cin >> a >> b >> c;
        bool flag = true;
        if(c % 2 == 0){
            if(a <= b) flag = false;
        }
        else{
            if(a < b) flag = false;
        }
        if(flag) cout << "First" << endl;
        else cout << "Second" << endl;
    }
}