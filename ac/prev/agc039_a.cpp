#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define rep(i, n) for (ll i = 0; i < n; ++i)
ll dx[4] = { 0, 1, 0, -1 };
ll dy[4] = { 1, 0, -1, 0 };
const ll INF = LLONG_MAX;
const ll MOD = 1e9 + 7;

ll f(string s)
{
    int N = s.size();
    ll sum = 0;
    for (ll i = 0, j = 0; i < N; i = j) {
        // 同じ数が連続する回数
        while (j < N && s[i] == s[j]) {
            j++;
        }
        sum += (j - i) / 2;
    }
    return sum;
}

int main(int argc, char const* argv[])
{
    string S;
    cin >> S;
    ll N = S.size(), K;
    cin >> K;

    // もし全ての文字が同じなら
    bool same = true;
    for (int i = 0; i < N; ++i) {
        if (S[0] != S[i]) {
            same = false;
        }
    }
    if (same) {
        cout << N * K / 2 << endl;
        return 0;
    }

    ll d1 = f(S), d2 = f(S + S);
    ll a = d1, d = d2 - d1;

    // 文字列同士が連続するのはK-1箇所なので,その分を足す
    cout << a + (K - 1) * d << endl;
    return 0;
}
