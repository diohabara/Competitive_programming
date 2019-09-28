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
    ll N;
    cin >> N;
    typedef pair<int, int> pair;
    vector<pair> A(N);
    rep(i, N)
    {
        int a;
        cin >> a;
        A[i] = pair(a, i);
    }
    sort(ALL(A));
    rep(i, N)
    {
        if (i)
            cout << " ";
        cout << A[i].second+1;
    }
    cout << endl;
    return 0;
}