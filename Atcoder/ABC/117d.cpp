#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < n; i++)
#define LL long long
#define endl '\n'
using namespace std;

int main()
{
    cin.tie(0);
    ios::sync_with_stdio(false);
    int n;
    LL k, a[100000];
    cin >> n >> k;

    int max_div = 0; // 2進数にしたときの最大の桁数


    int cnt[12] = {};

    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (a[i] > k) {
            k = a[i];
        }
    }

    while (k > 0) {
        k /= 2;
        max_div++;
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < max_div; j++) {
            if (pow(2, j) <= a[i] && a[i] <= pow(2, j + 1)) {
                cnt[j]++;
            }
        }
    }

    LL sum = 0;
    for (int i = 0; i < max_div; i++) {
        sum += max(cnt[i], n - cnt[i]) * pow(2, i);
        cerr << cnt[i] << " & " << n - cnt[i] << endl;
    }
    cout << sum << endl;
    return 0;
}