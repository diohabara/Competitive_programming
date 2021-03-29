#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cmath>
#include <string>
#include <vector>
using namespace std;
const int MAX = 1000000;


int main(){
    int N, X, m[1000], min_gram;

    cin >> N >> X;
    for(int i = 0; i < N; i++){
        cin >> m[i];
        X -= m[i];
    }
    
    min_gram = m[0];
    for(int i = 1; i < N; i++){
        if(m[i] < min_gram) min_gram = m[i];
    }
    N += X / min_gram;
    cout << N << endl;    
	return 0;
}