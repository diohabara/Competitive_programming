#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)n; ++i)
static const int dx[4] = { 0, 1, 0, -1 };
static const int dy[4] = { 1, 0, -1, 0 };
static const char dir[4] = { 'u', 'r', 'd', 'l' };
static const ll INF = 1 << 21;
static const ll MOD = 1e9 + 7;

int N;

signed main()
{
    cin >> N;
    vector<int> A;
    map<int, int> mp;
    rep(i, N)
    {
        int a;
        cin >> a;
        A.push_back(a);
        mp[a]++;
    }
    int kinds = mp.size(), cnt = 0;
    bool isOdd;
    for (auto& a : A) {
        if (mp[a] > 1) {
            cnt++;
            mp[a]--;
        }
    }
    if (cnt % 2) {
        isOdd = true;
    } else {
        isOdd = false;
    }
    if (isOdd) {
        cout << N - (cnt + 1) << endl;
    } else {
        cout << N - cnt << endl;
    }
    return 0;
}