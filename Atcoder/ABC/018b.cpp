#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cmath>
#include <string>
#include <vector>
using namespace std;
const int MAX = 1000000;


int main(){
    string S;
    int N;
    int l[100], r[100];

    cin >> S;
    cin >> N;
    for(int i = 0; i < N; i++){
        cin >> l[i] >> r[i];
        l[i]--;
        r[i]--;
    }

    int length = S.size();
    string T[100];
    int i, j;

    for(i = 0; i < N; i++){
        int cnt = r[i];
        for(j = l[i]; j <= r[i]; j++){
            T[cnt] = S[j];
            cnt--;
        }

        for(j = l[i]; j <= r[i]; j++){
            S[j] = T[j][0];
        }
    }
    cout << S << endl;
    return 0;
}