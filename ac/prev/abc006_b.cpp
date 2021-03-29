#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;
const int length = 1000000;


int main(){
    int n, R[length];
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> R[i];
    }
    int max_profit, min;
    max_profit = -10;
    min = R[0];
    for(int i = 0; i < n; i++){
        if(R[i] < min) min = R[i];
        if(R[i] - min > max_profit) max_profit = R[i] - min;
    }
    cout << max_profit << endl;
}