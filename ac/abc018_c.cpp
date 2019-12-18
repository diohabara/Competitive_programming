#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
using namespace std;
int dy[4] = { 1, 0, -1, 0 }, dx[4] = { 0, 1, 0, -1 };
typedef pair<ll, ll> P;
int R, C, K;
// A[y][x]: i行j列のsが'o'なら1，'x'なら0
int A[510][510];
int ans;

bool check(int y, int x)
{
    for (int i = -K; i <= K; i++) {
        int num = K - abs(i); // yからnumだけ座標が下がる
        int ny = y + num, nx = x + i; // ny, nxが菱形の底の座標となる
        // 範囲外ならfalse
        if (nx < 0 || nx >= C || ny < 0 || ny >= R) {
            return false;
        }
        int need = num * 2 + 1; // 縦に見た，必要な菱形の長さ
        // 底の値が必要な値に達していないならfalse
        if (A[ny][nx] < need) {
            return false;
        }
    }

    // 間違いがなければtrue
    return true;
}

int main()
{
    cin.tie(0);
    ios::sync_with_stdio(false);
    // input
    cin >> R >> C >> K;
    K--;
    for (int i = 0; i < R; i++) {
        for (int j = 0; j < C; j++) {
            char b;
            cin >> b;
            // bが'o'ならA[i][j]は1となる
            A[i][j] = (b == 'o');
        }
    }

    // 縦の連続したマスについて累積和
    for (int i = 0; i < C; i++) {
        for (int j = 1; j < R; j++) {
            // A[j][i]が0なら次のマスについて調べる
            if (!A[j][i]) {
                continue;
            }
            A[j][i] += A[j - 1][i];
        }
    }

    int ans = 0;
    // すべてのマスについて調べる
    for (int i = 0; i < R; i++) {
        for (int j = 1; j < C; j++) {
            if (check(i, j)) {
                ans++;
            }
        }
    }
    cout << ans << endl;
    return 0;
}
