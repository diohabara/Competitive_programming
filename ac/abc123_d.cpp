#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
#define ll long long
#define endl '\n'
using namespace std;
int dy[4] = { 1, 0, -1, 0 }, dx[4] = { 0, 1, 0, -1 };

int main()
{
    cin.tie(0);
    ios::sync_with_stdio(false);
    ll X, Y, Z, K;
    cin >> X >> Y >> Z >> K;
    vector<ll> A(X), B(Y), C(Z);
    rep(i, X) { cin >> A[i]; }
    rep(i, Y) { cin >> B[i]; }
    rep(i, Z) { cin >> C[i]; }
    vector<ll> tmp, ans;
    rep(i, X)
    {
        rep(j, Y)
        {
            tmp.push_back(A[i] + B[j]);
        }
    }
    sort(tmp.rbegin(), tmp.rend());
    rep(i, min(K,X*Y))
    {
        rep(j, Z)
        {
            ans.push_back(tmp[i] + C[j]);
        }
    }

    sort(ans.rbegin(), ans.rend());
    rep(i, K)
    {
        cout << ans[i] << endl;
    }
    return 0;
}
