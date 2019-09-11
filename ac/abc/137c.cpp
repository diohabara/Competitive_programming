#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define rep(i, n) for (ll i = 0; i < n; ++i)
#define ALL(a) a.begin(), a.end()
ll dx[4] = { 0, 1, 0, -1 };
ll dy[4] = { 1, 0, -1, 0 };
const ll INF = 1e14;
const ll MOD = 1e9 + 7;

ll cal(ll n)
{
    return n * (n - 1) / 2;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int N;
    cin >> N;
    vector<string> s(N);
    rep(i, N)
    {
        cin >> s[i];
        sort(s[i].begin(), s[i].end());
    }
    sort(s.begin(), s.end());
    int l = 0, r = 1;
    ll cnt = 0;
    while (true) {
        if (s[l] == s[r]) {
            r++;
        } else {
            cnt += cal(r - l);
            l = r;
            r++;
        }
        if (r == N && s[r-1] == s[l]) {
            cnt += cal(r - l);
            break;
        }
    }
    cout << cnt << endl;
    return 0;
}