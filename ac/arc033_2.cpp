#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)n; ++i)
static const int dx[4] = { 0, 1, 0, -1 };
static const int dy[4] = { 1, 0, -1, 0 };
static const char dir[4] = { 'u', 'r', 'd', 'l' };
static const ll INF = 1 << 21;
static const ll MOD = 1e9 + 7;
ll Na, Nb;

signed main()
{
    cin >> Na >> Nb;
    setprecision(10);
    set<int> A;
    set<int> B;
    rep(i, Na)
    {
        int a;
        cin >> a;
        A.emplace(a);
    }
    rep(i, Nb)
    {
        int b;
        cin >> b;
        B.emplace(b);
    }
    vector<int> inter;
    set_intersection(A.begin(), A.end(), B.begin(), B.end(), back_inserter(inter));
    vector<int> uni;
    set_union(A.begin(), A.end(), B.begin(), B.end(), back_inserter(uni));
    cout << 1.0 * inter.size() / uni.size() << endl;
    return 0;
}