#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cmath>
#include <string>
#include <vector>
using namespace std;
const int MAX = 1000000;


int main(){
    int N, a, b, K, P[100];
    cin >> N;
    cin >> a >> b;
    cin >> K;

    for(int i = 0; i < K; i++){
        cin >> P[i];
    }
    
    if(N < K + 2){
        cout << "NO" << endl;
        return 0;
    }

    for(int i = 0; i < K; i++){
        if(a == P[i] || b == P[i]){
            cout << "NO" << endl;
            return 0;   
        }
        for(int j = i+1; j < K; j++){
            if(P[i] == P[j]){
                cout << "NO" << endl;
                return 0;
            }
        }
    }
    
    cout << "YES" << endl;
	return 0;
}