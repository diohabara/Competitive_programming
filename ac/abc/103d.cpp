#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
#define ll long long
#define endl '\n'
using namespace std;
int dy[4] = {1, 0, -1, 0}, dx[4] = {0, 1, 0, -1};
typedef pair<ll, ll> P;
bool compareB(P a, P b) {
    if (a.second != b.second) {
        return a.second < b.second;
    } else {
        return a.first < b.first;
    }
}

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    ll n, m;
    cin >> n >> m;
    vector<P> bri;
    bri.resize(m);
    rep(i, m) {
        ll a, b;
        cin >> a >> b;
        bri[i] = P(a, b);
    }
    sort(bri.begin(), bri.end(), compareB);

    int tmp = bri[0].second;
    int cnt = 1;
    rep(i, m) {
        if (tmp <= bri[i].first) {
            cnt++;
            tmp = bri[i].second;
        }
    }
    cout << cnt << endl;

    return 0;
}