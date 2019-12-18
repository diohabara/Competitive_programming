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
    int cnt[10] = {0};
    string S;
    cin >> S;
    for (int i = 0; i < S.size(); i++) {
        if (S[i] == 'A') cnt[0]++;
        if (S[i] == 'B') cnt[1]++;
        if (S[i] == 'C') cnt[2]++;
        if (S[i] == 'D') cnt[3]++;
        if (S[i] == 'E') cnt[4]++;
        if (S[i] == 'F') cnt[5]++;
    }
    for (int i = 0; i < 5; i++) {
        cout << cnt[i] << ' ';
    }
    cout << cnt[5] << endl;
	return 0;
}