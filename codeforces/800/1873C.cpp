#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        vector<vector<char>> a(10, vector<char> (10));
        int points = 0;
        for(int i = 0; i < 10; i++){
            for(int j = 0; j < 10; j++){
                cin >> a[i][j];

                if(a[i][j] == 'X'){
                    if(i == 0 || j == 0 || i == 9 || j == 9) points++;
                    else if(i == 1 || j == 1 || i == 8 || j == 8) points = points+2;
                    else if(i == 2 || j == 2 || i == 7 || j == 7) points = points+3;
                    else if(i == 3 || j == 3 || i == 6 || j == 6) points = points+4;
                    else if(i == 4 || j == 4 || i == 5 || j == 5) points = points+5;
                }
            }
        }
        cout << points << endl;
    }
}