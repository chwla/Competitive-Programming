#include <bits/stdc++.h>
using namespace std;


int main(){
    string s;
    cin>>s;
    unordered_set<char> us;
    for(char t: s){
        us.insert(t);
    }
    int n = us.size();
    if(n%2==0){
        cout<<"CHAT WITH HER!"<<endl;
    }
    else {
        cout<<"IGNORE HIM!"<<endl;
    }
    return 0;
}