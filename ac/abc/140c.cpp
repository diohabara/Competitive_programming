#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define rep(i, n) for (ll i = 0; i < n; ++i)
#define ALL(a) a.begin(), a.end()
ll dx[4] = { 0, 1, 0, -1 };
ll dy[4] = { 1, 0, -1, 0 };
const ll INF = 1e14;
const ll MOD = 1e9 + 7;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int N;
    cin >> N;
    vector<int> B(N - 1), A(N);
    int sum = 0;
    rep(i, N - 1)
    {
        cin >> B[i];
    }
    rep(i, N)
    {
        if (i == 0) {
            A[i] = B[i];
        } else if (i == N - 1) {
            A[i] = B[i - 1];
        } else {
            A[i] = min(B[i - 1], B[i]);
        }
        sum += A[i];
    }
    cout << sum << endl;
    return 0;
}