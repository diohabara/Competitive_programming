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
    int N, K, Q;
    cin >> N >> K >> Q;
    vector<int> A(Q);
    vector<int> people(N, K - Q);
    rep(i, Q)
    {
        cin >> A[i];
    }
    for (auto& a : A) {
        people[a-1]++;
    }

    for (auto& p : people) {
        if (p > 0) {
            puts("Yes");
        } else {
            puts("No");
        }
    }
    return 0;
}