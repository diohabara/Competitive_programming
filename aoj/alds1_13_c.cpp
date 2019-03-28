// // Iterative Deepening
// #include <bits/stdc++.h>
// #define rep(i, n) for (int i = 0; i < n; i++)
// #define ll long long
// #define endl '\n'
// using namespace std;
// #define N 4
// #define N2 16
// #define LIMIT 100

// static const int dx[4] = {-1, 0, 1, 0};
// static const int dy[4] = {0, -1, 0, 1};
// static const char dir[4] = {'u', 'l', 'd', 'r'};
// int MDT[N2][N2];

// struct Puzzle {
//     int f[N2], space, MD;
// };

// Puzzle state;
// int limit;  // 深さの限界
// int path[LIMIT];

// int getAllMD(Puzzle pz) {
//     int sum = 0;
//     for (int i = 0; i < N2; i++) {
//         if (pz.f[i] == N2) continue;
//         sum += MDT[i][pz.f[i] - 1];
//     }
//     return sum;
// }

// bool isSolved() {
//     for (int i = 0; i < N2; i++)
//         if (state.f[i] != i + 1) return false;
//     return true;
// }

// bool dfs(int depth, int prev) {
//     if (state.MD == 0) return true;
//     // 現在の深さにヒューリスティックを足して制限を超えたら枝を刈る
//     if (depth + state.MD > limit) return false;

//     int sx = state.space / N;
//     int sy = state.space % N;
//     Puzzle tmp;

//     for (int r = 0; r < 4; r++) {
//         int tx = sx + dx[r];
//         int ty = sy + dy[r];
//         if (tx < 0 || ty < 0 || tx >= N || ty >= N || ty >= N) continue;
//         if (max(prev, r) - min(prev, r) == 2) continue;
//         tmp = state;
//         // マンハッタン距離の差分を計算しつつ，ピースをスワップ
//         state.MD -= MDT[tx * N + ty][state.f[tx * N + ty] - 1];
//         state.MD += MDT[sx * N + sy][state.f[tx * N + ty] - 1];
//         swap(state.f[tx * N + ty], state.f[sx * N + sy]);
//         state.space = tx * N + ty;
//         if (dfs(depth + 1, r)) {
//             path[depth] = r;
//             return true;
//         }
//         state = tmp;
//     }

//     return false;
// }

// // 反復深化
// string iterative_deepening(Puzzle in) {
//     in.MD = getAllMD(in);  // 初期状態のマンハッタン距離

//     for (limit = in.MD; limit <= LIMIT; limit++) {
//         state = in;
//         if (dfs(0, -100)) {
//             string ans = "";
//             for (int i = 0; i < limit; i++) ans += dir[path[i]];
//             return ans;
//         }
//     }

//     return "unsolvable";
// }
// int main() {
//     cin.tie(0);
//     ios::sync_with_stdio(false);

//     for (int i = 0; i < N2; i++)
//         for (int j = 0; j < N2; j++)
//             MDT[i][j] = abs(i / N - j / N) + abs(i % N - j % N);

//     Puzzle in;

//     for (int i = 0; i < N2; i++) {
//         cin >> in.f[i];
//         if (in.f[i] == 0) {
//             in.f[i] = N2;
//             in.space = i;
//         }
//     }
//     string ans = iterative_deepening(in);
//     cout << ans.size() << endl;

//     return 0;
// }

// A*
#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

#define N 4
#define N2 16

static const int dx[4] = {0, -1, 0, 1};
static const int dy[4] = {1, 0, -1, 0};
static const char dir[4] = {'r', 'u', 'l', 'd'};
int MDT[N2][N2];

struct Puzzle {
    int f[N2], space, MD;
    int cost;

    bool operator<(const Puzzle &p) const {
        for (int i = 0; i < N2; i++) {
            if (f[i] == p.f[i]) continue;
            return f[i] < p.f[i];
        }
        return false;
    }
};

struct State {
    Puzzle puzzle;
    int estimated;
    bool operator<(const State &s) const { return estimated > s.estimated; }
};

int getAllMD(Puzzle pz) {
    int sum = 0;
    for (int i = 0; i < N2; i++) {
        if (pz.f[i] == N2) continue;
        sum += MDT[i][pz.f[i] - 1];
    }
    return sum;
}

int astar(Puzzle s) {
    priority_queue<State> PQ;
    s.MD = getAllMD(s);
    s.cost = 0;
    map<Puzzle, bool> V;
    Puzzle u, v;
    State initial;
    initial.puzzle = s;
    initial.estimated = getAllMD(s);
    PQ.push(initial);

    while (!PQ.empty()) {
        State st = PQ.top();
        PQ.pop();
        u = st.puzzle;

        if (u.MD == 0) return u.cost;
        V[u] = true;

        int sx = u.space / N;
        int sy = u.space % N;

        for (int r = 0; r < 4; r++) {
            int tx = sx + dx[r];
            int ty = sy + dy[r];
            if (tx < 0 || ty < 0 || tx >= N || ty >= N) continue;
            v = u;

            v.MD -= MDT[tx * N + ty][v.f[tx * N + ty] - 1];
            v.MD += MDT[sx * N + sy][v.f[tx * N + ty] - 1];

            swap(v.f[sx * N + sy], v.f[tx * N + ty]);
            v.space = tx * N + ty;
            if (!V[v]) {
                v.cost++;
                State news;
                news.puzzle = v;
                news.estimated = v.cost + v.MD;
                PQ.push(news);
            }
        }
    }
    return -1;
}

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);

    for (int i = 0; i < N2; i++)
        for (int j = 0; j < N2; j++)
            MDT[i][j] = abs(i / N - j / N) + abs(i % N - j % N);

    Puzzle in;

    for (int i = 0; i < N2; i++) {
        cin >> in.f[i];
        if (in.f[i] == 0) {
            in.f[i] = N2;
            in.space = i;
        }
    }
    cout << astar(in) << endl;

    return 0;
}