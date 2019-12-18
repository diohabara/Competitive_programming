#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
#define ll long long
#define endl '\n'
using namespace std;
int dy[4] = { 1, 0, -1, 0 }, dx[4] = { 0, 1, 0, -1 };
typedef pair<ll, ll> P;
const long long INF = 1ll << 60;
const int MAX = 210;

int N, M, R;
ll dist[MAX][MAX]; // d[a][b]はaからbへの距離

int main()
{
    cin.tie(0);
    ios::sync_with_stdio(false);
    cin >> N >> M >> R;
    vector<int> vec;
    for (int i = 0; i < R; i++) {
        int tmp;
        cin >> tmp;
        --tmp;
        vec.push_back(tmp);
    }
    // Floyd-Warshallの初期化: dist[i][i] = 0
    for (int i = 0; i < 210; i++) {
        for (int j = 0; j < 210; j++) {
            dist[i][j] = INF;
        }
        dist[i][i] = 0;
    }

    // 入力
    for (int i = 0; i < M; i++) {
        int a, b, c;
        cin >> a >> b >> c;
        --a, --b;
        dist[a][b] = dist[b][a] = c;
    }

    // Floyd-Warshallで各点への距離を求めている
    for (int k = 0; k < N; k++) {
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
                dist[i][j] = min(dist[i][j], dist[i][k] + dist[k][j]);
            }
        }
    }

    // R!通りの探索
    ll res = INF;
    // 訪れる町を昇順にソート
    sort(vec.begin(), vec.end());
    do {
        ll tmp = 0;
        // 訪れる町の距離を求める
        for (int i = 1; i < vec.size(); i++) {
            tmp += dist[vec[i]][vec[i - 1]];
        }
        // 最小のものを答えとする
        res = min(res, tmp);
    } while (next_permutation(vec.begin(), vec.end()));
    // next_permutationを用いることですべての順列で試す

    cout << res << endl;
    return 0;
}