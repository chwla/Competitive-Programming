#include <bits/stdc++.h>
using namespace std;

int main(){
    int x1, x2, x3;
    cin>>x1>>x2>>x3;
    
    int mn = min({x1, x2, x3});
    int mx = max({x1,x2,x3});

    cout<<mx-mn<<endl;
    return 0;
}