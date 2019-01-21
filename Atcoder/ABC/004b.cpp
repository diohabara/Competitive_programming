#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main(){
    char C[4][4], copy[4][4];
    int i, j;

    for(i = 0; i < 4;i++){
        for(j = 0; j < 4;j++){
            cin >> C[i][j];
        }
    }

    for(i = 0; i < 4;i++){
        for(j = 0; j < 4;j++){
            cout << C[3-i][3-j] << ' ';
        }
        cout << endl;
    }
    return 0;
}