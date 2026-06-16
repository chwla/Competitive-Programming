#include <bits/stdc++.h>
using namespace std;


int main(){
    int t;
    cin>>t;
    int ans = 0;
    while(t--){
        string x;
        cin>>x;
        if (x == "X++" || x == "++X"){
            ans++;
        }
        else if (x == "X--" || x == "--X"){
            ans--;
        }
    }
    cout<<ans<<endl;
    return 0;
}