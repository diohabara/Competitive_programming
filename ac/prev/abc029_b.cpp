#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cmath>
#include <string>
#include <vector>
using namespace std;


int main(){
	cin.tie(0);
	ios::sync_with_stdio(false);
    int cnt_r = 0;
    for (int i = 0; i < 12; i++) {
        string S;
        cin >> S;
        for (int j = 0; j < S.size(); j++) {
            if (S[j] == 'r') {
                cnt_r++;
                break;
            }
        }
    }
    cout << cnt_r << endl;
	return 0;
}