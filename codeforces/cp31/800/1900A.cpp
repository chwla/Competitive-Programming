#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        for(int i = 0; i < n; i++){
            char c;
            cin>>c;
            s+=c;
        }
        int cont = 0;
        int ans = 0;
        for(char c : s){
            if (c == '.'){
                cont++;
                if(cont == 3){
                    cout<<2<<"\n";
                    break;
                }
                ans++;
            }
            else{
                cont = 0;
            }
        }
        if(cont != 3) cout<<ans<<"\n";
    }
}