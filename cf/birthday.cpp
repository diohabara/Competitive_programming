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
    int N, M, K, L;
    cin >> N >> M >> K >> L;
    int need = N - K;
    if((need - L) % M == 0){
        printf("%d\n", (need-L)/M);
    } else {
        printf("%d\n", -1);
    }
	return 0;
}
