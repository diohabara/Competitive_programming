#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cmath>
#include <string>
#include <vector>
using namespace std;
const int MAX = 1000000;


int main(){
    int A, B, C;
    cin >> A >> B >> C;
    
    if(C == A + B){
        if(C == A - B){
            cout << '?' << endl;
        }
        else {
            cout << '+' << endl;
        }
    }
    else if(C == A - B){
        if(C == A + B){
            cout << '-' << endl;
        }
        else {
            cout << '-' << endl;
        }
    }
    else{
        cout << '!' << endl;
    }
	return 0;
}