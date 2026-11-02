#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    int curr = 1, maxc = 1;
    for(int i = 1; i < s.length(); i++){
        if(s[i] == s[i-1]){
            curr++;
            maxc = max(curr, maxc);
        }
        else{
            curr = 1;
        }
    }
    cout << maxc << endl;
}