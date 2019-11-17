#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define rep(i, n) for (ll i = 0; i < n; ++i)
ll dx[4] = { 0, 1, 0, -1 };
ll dy[4] = { 1, 0, -1, 0 };
const ll INF = 1 << 21;
const ll MOD = 1e9 + 7;

int graph[100][100];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    memset(graph, 0, sizeof(graph));
    rep(i, n)
    {
        int u, k;
        cin >> u >> k;
        u--;
        rep(j, k)
        {
            int v;
            cin >> v;
            v--;
            graph[u][v] = 1;
        }
    }
    rep(i, n)
    {
        rep(j, n)
        {
            cout << graph[i][j];
            if (j != n-1) {
                cout << " ";
            }
        }
        cout << endl;
    }
    return 0;
}