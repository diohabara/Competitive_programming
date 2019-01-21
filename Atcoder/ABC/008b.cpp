#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cmath>
#include <string>
#include <vector>
using namespace std;
const int MAX = 1000000;


int main(){
    int N;
    string S[100];
    int count[100];
    cin >> N;
    for(int i = 0; i < N; i++){
        cin >> S[i];
        count[i] = 0;
    }

    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            if (S[i] == S[j]){
                count[i]++;
            }
        }
    }

    int max_count = count[0];
    int max_s = 0;
    for(int i = 1; i < N; i++){
        if(count[i] >= max_count){
            max_count = count[i];
            max_s = i;
        }
    }

    cout << S[max_s] << endl;

	return 0;
}