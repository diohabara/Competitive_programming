#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
#define ll long long
#define endl '\n'
using namespace std;
int dy[4] = { 1, 0, -1, 0 }, dx[4] = { 0, 1, 0, -1 };
typedef pair<ll, ll> P;

int main()
{
    cin.tie(0);
    ios::sync_with_stdio(false);
    string s;
    cin >> s;
    bool m1 = false;
    bool m2 = false;
    int mm1 = (s[0] - '0') * 10 + (s[1] - '0');
    int mm2 = (s[2] - '0') * 10 + (s[3] - '0');
    if (1 <= mm1 && mm1 <= 12) {
        m1 = true;
    }
    if (1 <= mm2 && mm2 <= 12) {
        m2 = true;
    }

    if (!m1 && !m2) {
        cout << "NA" << endl;
    } else if (m1 && m2) {
        cout << "AMBIGUOUS" << endl;
    } else if (m1 && !m2) {
        cout << "MMYY" << endl;
    } else{
        cout << "YYMM" << endl;
    }
    return 0;
}