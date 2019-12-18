#include <iostream>
#include <cstdlib>
#include <algorithm>
#include <cstdio>
#include <cmath>
#include <string>
#include <vector>
using namespace std;
const int MAX = 1000000;


int main(){
    string A;
    cin >> A;
    if(A == "a"){
        cout << -1 << endl;
    }
    else if(A.size() == 1){
        cout << 'a' << endl;
    }
    else {
        for( int i = 0; i < A.size() - 1; i++){
            cout << A[i];
        }
        cout << endl;
    }
	return 0;
}