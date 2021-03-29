#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
using namespace std;
int dy[4] = { 1, 0, -1, 0 }, dx[4] = { 0, 1, 0, -1 };
typedef pair<ll, ll> P;
const int INF = 1e9;
const int MAX = 12;
int N, M;
int d[MAX][MAX];

void floydWarshall()
{
    for (int i = 0; i < MAX; i++) {
        for (int j = 0; j < MAX; j++) {
            for (int k = 0; k < MAX; k++) {
                d[j][k] = min(d[j][k], d[j][i] + d[i][k]);
            }
        }
    }
}

int main()
{
    cin.tie(0);
    ios::sync_with_stdio(false);
    int N, M;
    cin >> N >> M;
    int A, B;
    for (int i = 0; i < MAX; i++) {
        for (int j = 0; j < MAX; j++) {
            d[i][j] = INF;
        }
    }
    for (int i = 0; i < MAX; i++) {
        d[i][i] = 0;
    }
    for (int i = 0; i < M; i++) {
        cin >> A >> B;
        A--, B--;
        d[A][B] = d[B][A] = 1;
    }

    floydWarshall();

    for (int i = 0; i < N; i++) {
        int cnt = 0;
        for (int j = 0; j < N; j++) {
            if (d[i][j] == 2) {
                cnt++;
            }
        }
        cout << cnt << endl;
    }
    return 0;
}