#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cmath>
#include <string>
#include <vector>
using namespace std;

void proper_time(int, int, int);

int main()
{
	cin.tie(0);
	ios::sync_with_stdio(false);
    int L, H, N, A[60];
    cin >> L >> H >> N;
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    for (int i = 0; i < N; i++ ) {
        proper_time(L, H, A[i]);
    }

	return 0;
}

void proper_time(int L, int H, int A)
{
    if (A < L) {
        cout << L - A << endl;
    }
    else if (A > H) {
        cout << -1 << endl;
    }
    else cout << 0 << endl;
}