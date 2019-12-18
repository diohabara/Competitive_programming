#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
using namespace std;
int dy[4] = { 1, 0, -1, 0 }, dx[4] = { 0, 1, 0, -1 };
typedef pair<ll, ll> P;

int main()
{
    cin.tie(0);
    ios::sync_with_stdio(false);
    int n;
    cin >> n;
    string s;
    int p;
    pair<pair<string, int>, int> m[110];
    for (int i = 0; i < n; i++) {
        cin >> s >> p;
        m[i] = make_pair(make_pair(s, -p), i);
    }
    sort(m, m + n);
    for (int i = 0; i < n; i++) {
        cout << m[i].second + 1 << endl;
    }
    return 0;
}