#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,k,l,c,d,p,nl,np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;

    int a = (k*l)/nl;
    int b = p/np;
    int t1 = min(a,b);
    int t2 = min(t1, (c*d));
    int ans = t2/n;
    cout<<ans<<endl;
    return 0;
}