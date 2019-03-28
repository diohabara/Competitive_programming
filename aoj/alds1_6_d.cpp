#include<iostream>
#include<algorithm>
using namespace std;
static const int MAX = 1000;
static const int VMAX = 10000;

int n, A[MAX], s;
int B[MAX], T[VMAX + 1];

int solve()
{
    int ans = 0;

    bool V[MAX];
    for (int i = 0; i < n; i++) {
        B[i] = A[i];  // 配列Aを配列Bにコピーする
        V[i] = false;  // 配列Vのすべての要素をfalseとする
    }
    sort(B, B+n);  // 配列Aをコピーした配列Bをソートする
    for (int i = 0; i < n; i++) {
        // 配列TではBの要素をはじめから記録する
        // 添字はBの要素，値は何番目の要素か
        T[B[i]] = i;  // 配列TでBのi番目の要素の部分をiとする
    }
    for (int i = 0; i < n; i++) {
        if (V[i]) continue;  // Vの要素がfalseのときは下の処理を行う(サイクルに登場するとtrueになる)
        int cur = i;  // curは現在iの添字
        int S = 0;  // Sはコストの合計
        int m = VMAX;
        int an = 0;
        while(1) {
            // ここではサイクルを探す
            V[cur] = true;  // 現在iの添字の要素のVをtrueとする
            an++;  // anをインクリメント
            int v = A[cur];  // vをAの現在の添字の要素
            m = min(m, v);  // mをm(= VMAX)とv(= Aの現在の要素)の小さい方とする
            S += v;  // Sにvを加算する
            cur = T[v];  // curをTのv番目の要素とする
            if (V[cur]) break;  // もしがすでに触れた部分ならばwhileから抜ける
        }
        ans += min(S + (an - 2) * m, m + S + (an + 1) * s);
    }

    return ans;
}

int main()
{
    cin >> n;
    s = VMAX;
    for (int i = 0; i < n; i++) {
        cin >> A[i];
        s = min(s, A[i]);
    }
    int ans = solve();
    cout << ans << endl;

    return 0;
}