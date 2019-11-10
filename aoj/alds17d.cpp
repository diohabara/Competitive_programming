#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define rep(i, n) for (ll i = 0; i < n; ++i)
ll dx[4] = { 0, 1, 0, -1 };
ll dy[4] = { 1, 0, -1, 0 };
const ll INF = LLONG_MAX;
const ll MOD = 1e9 + 7;

int n, pos;
vector<int> pre, in, post;

void recon(int l, int r)
{
    // 左部分木と右部分木に分ける
    if (l >= r) {
        return;
    }
    int root = pre[pos++];
    int m = distance(in.begin(), find(in.begin(), in.end(), root));
    recon(l, m);
    recon(m + 1, r);
    post.push_back(root);
}

void solve()
{
    pos = 0;
    recon(0, (int)pre.size());
    rep(i, n)
    {
        if (i)
            cout << " ";
        cout << post[i];
    }
    cout << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int k;
    cin >> n;
    rep(i, n)
    {
        cin >> k;
        pre.push_back(k);
    }

    rep(i, n)
    {
        cin >> k;
        in.push_back(k);
    }

    solve();

    return 0;
}