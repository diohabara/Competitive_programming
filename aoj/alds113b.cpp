#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define rep(i, n) for (ll i = 0; i < (ll)n; ++i)
ll dx[4] = { 0, 1, 0, -1 };
ll dy[4] = { 1, 0, -1, 0 };
static const int N = 3;
static const int N2 = 9;
static const char dir[4] = { 'u', 'r', 'd', 'l' };

struct Puzzle {
    int f[N2]; // f[i] = i+1となっているときに答え
    int space; // 0がある場所の添字
    string path; // 移動を文字列で管理している
    bool operator<(const Puzzle& p) const
    {
        for (int i = 0; i < N2; i++) {
            if (f[i] == p.f[i]) {
                continue;
            }
            return f[i] > p.f[i];
        }
        return false;
    }
};

// このパズルが答えであるとき
bool isTarget(Puzzle p)
{
    for (int i = 0; i < N2; i++) {
        if (p.f[i] != (i + 1)) {
            return false;
        }
    }
    return true;
}

string bfs(Puzzle s)
{
    queue<Puzzle> Q; // パズルをキューに入れる(深さ幅優先なので)
    map<Puzzle, bool> V;
    Puzzle u, v;
    s.path = "";
    Q.push(s);
    V[s] = true; // 入力の写像をtrue(探索済み)にする

    while (!Q.empty()) {
        u = Q.front(); // 一番最初に入れたキューの中身をセット
        Q.pop();
        if (isTarget(u)) { //もしターゲットなら移動の順序を返す
            return u.path;
        }
        // スペースのある位置は(sx, sy)
        int sx = u.space / N;
        int sy = u.space % N;

        rep(r, 4)
        {
            // スペースの移動先の場所を(tx, ty)
            int tx = sx + dx[r];
            int ty = sy + dy[r];
            // もし枠の外に移動していたら無視
            if (tx < 0 || ty < 0 || tx >= N || ty >= N) {
                continue;
            }
            // u: 移動前の盤, v: 移動後の盤
            v = u;
            // コマを交換
            v.space = tx * N + ty; // 新しいスペースの置き場所
            swap(v.f[u.space], v.f[v.space]);
            if (!V[v]) {
                V[v] = true; // vを探索済みにする
                v.path += dir[r]; // 経路を追加する
                Q.push(v); // 探索済みの経路をQに追加する
            }
        }
    }

    return "unsolvable";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    Puzzle in;
    for (int i = 0; i < N2; i++) {
        cin >> in.f[i];
        if (in.f[i] == 0) {
            in.f[i] = N2; // スペースを9として扱う
            in.space = i;
        }
    }
    string ans = bfs(in);
    cout << ans.size() << endl;
    return 0;
}