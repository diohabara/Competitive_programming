#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cmath>
#include <string>
#include <vector>
using namespace std;
const int MAX = 1000000;


int main(){
    int N, A[100], sum = 0, number;
    cin >> N;
    number = N;
    for(int i = 0; i < N; i++){
        cin >> A[i];
        sum += A[i];
        if(A[i] == 0){
            number--;
        }
    }
    
    if(sum % number != 0){
        cout << sum / number + 1 << endl;
        return 0;
    }
    
    cout << sum / number << endl;
	return 0;
}