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

    int N; cin >> N;
    int T, A; cin >> T >> A;
    int H[2000];
    for(int i = 0; i < N; i++){
        cin >> H[i];
    }

    double temperature, gap, min = 100000, place;
    for(int i = 0; i < N; i++){
        temperature = T - H[i] * 0.006;
        gap = abs(temperature - A);
        if(gap < min){
            min = gap;
            place = i;
        }       
    }
    cout << place + 1 << endl;
	return 0;
}