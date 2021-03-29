#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cmath>
#include <string>
#include <vector>
using namespace std;
const int MAX = 1000000;


int main(){
	cin.tie(0);
	ios::sync_with_stdio(false);

    int N, T, A[100000];
    cin >> N >> T;
    for(int i = 0; i < N; i++){
        cin >> A[i] ;
    }

    long sum = 0;
    int gap;
    for(int i = 0; i < N - 1; i++){
        if (A[i + 1] - A[i] < T){
            sum += (A[i + 1] - A[i]);
        } else {
            sum += T;
        }
    }

    sum += T;

    cout << sum << endl;
    
	return 0;
}