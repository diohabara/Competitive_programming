#pragma GCC optimize("O3")
#include <bits/stdc++.h>
using namespace std;

int A[100001], B[100001], ans[200001];

signed main()
{
    cin.tie(0);
    ios::sync_with_stdio(false);
    int N;
    cin >> N;
    for (int i = 1; i <= N; ++i) {
        cin >> A[i] >> B[i];
    }
    for (int i = 1; i <= N; ++i) {
        for (int j = 1; j <= N; j++) {
            ans[i + j] += A[i] * B[j];
        }
    }
    for (int i = 1; i <= 2 * N; ++i) {
        cout << ans[i] << endl;
    }
    return 0;
}