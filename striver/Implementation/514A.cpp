#include <iostream>
using namespace std;

int main(){
    string s;
    cin>>s;
    for(int i = 0; i<s.size(); ++i){
        int d = s[i]-'0';
        int y = min(d, 9-d);
        if(i == 0 && y == 0) cout<<d;
        else cout << y;
    }
    return 0;
}