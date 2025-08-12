#include <iostream>
using namespace std;

int main(){
    int matrix[5][5];

    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 5; j++) {
            cin >> matrix[i][j];
        }
    }

    int row = 0, col = 0;
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            if(matrix[i][j] == 1){
                row = i;
                col = j;
            }
        }
    }
    int count = abs(2-row)+abs(2-col);
    cout<< count<<endl;


    return 0;
}