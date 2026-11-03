#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    sort(s.begin(), s.end());

    vector<string> result;
    do{
        result.push_back(s);
    } while(next_permutation(s.begin(), s.end()));


    cout << result.size() << endl;
    for(int i = 0; i < result.size(); i++){
        cout << result[i] << endl;
    }
}