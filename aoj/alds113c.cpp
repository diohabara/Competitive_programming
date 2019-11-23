#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define rep(i, n) for (ll i = 0; i < (ll)n; ++i)
static const int dx[4] = { 0, 1, 0, -1 };
static const int dy[4] = { 1, 0, -1, 0 };
static const char dir[4] = { 'u', 'r', 'd', 'l' };
static const ll INF = 1 << 21;
static const ll MOD = 1e9 + 7;
static const int N = 4;
static const int N2 = 16;
static const int LIMIT = 100;

// マンハッタン距離を記録
int MDT[N2][N2];

struct Puzzle {
    int f[N2]; // パズルの状態
    int space; // スペースのある場所
    int MD; // マンハッタン距離
};

Puzzle state;
int limit; // 深さの制限
int path[LIMIT]; // 経路

// マンハッタン距離を取得
int getAllMD(Puzzle pz)
{
    int sum = 0;
    // i->pz.f[i]-1へのマンハッタン距離を計測
    rep(i, N2)
    {
        if (pz.f[i] == N2) {
            continue;
        }
        sum += MDT[i][pz.f[i] - 1];
    }
    return sum;
}

// 全てのパズルの位置が正しい時にtrue
bool isSolved()
{
    rep(i, N)
    {
        if (state.f[i] != i + 1) {
            return false;
        }
    }
    return true;
}

bool dfs(int depth, int prev)
{
    if (state.MD == 0) {
        return true;
    }
    // 現在の深さにヒューリスティックを足して制限を超えたら枝を刈る
    if (depth + state.MD > limit) {
        return false;
    }

    // 現在のスペースは(sx, sy)
    int sx = state.space / N;
    int sy = state.space % N;
    Puzzle tmp;

    rep(r, 4)
    {
        // 次の位置は(tx, ty)
        int tx = sx + dx[r];
        int ty = sy + dy[r];
        if (tx < 0 || ty < 0 || tx >= N || ty >= N) {
            continue;
        }
        //
        if (abs(prev - r) == 2) { // 前回の動きの真逆(uとd, rとl)のときはcontinue
            continue;
        }
        tmp = state;
        // マンハッタン距離の差分を計算しつつ,ピースをスワップ
        state.space = tx * N + ty;
        state.MD -= MDT[state.space][state.f[state.space] - 1];
        state.MD += MDT[sx * N + sy][state.f[state.space] - 1];
        swap(state.f[state.space], state.f[sx * N + sy]);
        if (dfs(depth + 1, r)) {
            path[depth] = r; // 方向を記録
            return true;
        }
        state = tmp; // stateを更新
    }
    return false;
}

// 反復深化
string iterative_deepen(Puzzle in)
{
    in.MD = getAllMD(in); // 初期状態のマンハッタン距離
    for (limit = in.MD; limit <= LIMIT; limit++) {
        state = in;
        if (dfs(0, -100)) {
            string ans = "";
            rep(i, limit)
            {
                ans += dir[path[i]];
            }
            return ans;
        }
    }

    return "unsolvable";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    rep(i, N2)
    {
        rep(j, N2)
        {
            // i->j でのマンハッタン距離
            MDT[i][j] = abs(i / N - j / N) + abs(i % N - j % N);
        }
    }
    Puzzle in;

    rep(i, N2)
    {
        cin >> in.f[i];
        if (in.f[i] == 0) {
            in.f[i] = N2;
            in.space = i;
        }
    }

    string ans = iterative_deepen(in);
    cout << ans.size() << endl;

    return 0;
}