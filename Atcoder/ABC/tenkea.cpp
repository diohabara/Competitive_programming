#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cmath>
#include <string>
#include <vector>
using namespace std;
const int MAX = 1000000;

int main(){
    string T;
    string S;
    cin >> S;
    if(S.size() == 2){
        cout << S << endl;
    }
    else {
        for(int i = 0; i < 3; i++){
        cout << S[2 - i];
    }
        cout << endl;
    }
	return 0;
}