#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cmath>
#include <string>
#include <vector>
using namespace std;
const int MAX = 1000000;


int main(){
    string X;
    cin >> X;
    int length = X.size();
    while(true)
    { 
    if (length == 0) {
        cout << "YES" << endl;
        return 0;
    }
    else if (X[length - 1] == 'h' && X[length - 2] == 'c') {
        X.pop_back();
        X.pop_back();
        length -= 2;
    }
    else if (X[length - 1] == 'o') {
        X.pop_back();
        length--;
    }
    else if (X[length - 1] == 'k') {
        X.pop_back();
        length--;
    }
    else if (X[length - 1] == 'u') {
        X.pop_back();
        length--;
    }
    else {
        cout << "NO" << endl;
        return 0;
    }
    }
}