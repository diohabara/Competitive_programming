#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cmath>
#include <string>
#include <vector>
using namespace std;
const int MAX = 1000000;


int main(){
    int n, A[100];
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> A[i];
    }

    int max, second;

    if(A[0] > A[1]){
        max = A[0];
        second = A[1];
        }
    else{
        max = A[1];
        second = A[0];
    }

    for(int i = 2; i < n; i++){
        if(A[i] > second){
            if (A[i] > max) {
                second = max;
                max = A[i];
            }
            else if (A[i] == max){
                // do nothing
            }
            else {
                second = A[i];
            }
        }
    }
    cout << second << endl;
	return 0;
}