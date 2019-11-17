#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define rep(i, n) for (ll i = 0; i < n; ++i)
ll dx[4] = { 0, 1, 0, -1 };
ll dy[4] = { 1, 0, -1, 0 };
const ll INF = 1 << 21;
const ll MOD = 1e9 + 7;

const int N = 500;

double p[5000], q[5000], sump[5000], sumq[5000];
double memo[5000][5000];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    rep(i, n) { cin >> p[i + 1]; }
    rep(i, n + 1) { cin >> q[i]; }
    sumq[0] = q[0];

    rep(i, n)
    {
        sump[i + 1] = sump[i] + p[i + 1];
        sumq[i + 1] = sumq[i] + q[i + 1];
    }

    for (int i = 1; i < n + 1; ++i) {
        for (int j = 1; j < n + 1; ++j) {
            if (j >= i) {
                memo[i][j] = INF;
            } else {
                memo[i][j] = 0;
            }
        }
    }

    for (int l = 1; l < n + 1; ++l) {
        for (int i = 1; i < n + 2 - l; ++i) {
            int j = i + l - 1;
            for (int k = i; k < j + 1; ++k) {
                double sum = sump[j] - sump[i - 1];
                if (i == 1) {
                    sum += sumq[j];
                } else {
                    sum += sumq[j] - sumq[i - 2];
                }
                memo[i][j] = min(memo[i][j], sum - p[k] + memo[i][k - 1] + memo[k + 1][j]);
            }
        }
    }
    cout << memo[1][n] + sump[n] + sumq[n] << endl;
    return 0;
}