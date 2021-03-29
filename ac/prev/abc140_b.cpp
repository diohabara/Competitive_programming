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
    vector<int> A(N), B(N), C(N - 1);
    rep(i, N) { cin >> A[i]; }
    rep(i, N) { cin >> B[i]; }
    rep(i, N - 1) { cin >> C[i]; }
    int sum = 0;
    int prev = -1;
    rep(i, N)
    {
        sum += B[A[i] - 1];
        if (prev == A[i] - 1) {
            sum += C[prev - 1];
        }
        prev = A[i];
    }
    cout << sum << endl;
    return 0;
}