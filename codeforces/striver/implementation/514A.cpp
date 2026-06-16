#include <bits/stdc++.h>
using namespace std;

int main(){
    string a;
    cin>>a;
    for(int i = 0; i < a.length(); i++){
        int d = a[i] - '0';
        int inv = 9-d;
        if(i==0 && inv ==0) continue;
        if(inv < d){
            a[i] = inv + '0';
        }
    }
    cout<<a<<endl;
    return 0;
}