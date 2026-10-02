#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string s;
        for(int i = 0; i < n; i++){
            char x;
            cin >> x;
            s += x;
        }

        int i = 0, j = n-1;
        while(j > i){
            if((s[i] == '1' && s[j] == '0') || (s[i] == '0' && s[j] == '1')){
                n = n-2;
                i++;
                j--;
            }
            else break;
        }

        cout << n << endl;
    }
}