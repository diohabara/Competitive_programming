#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define rep(i, n) for (ll i = 0; i < n; ++i)
#define ALL(a) a.begin(), a.end()
ll dx[4] = { 0, 1, 0, -1 };
ll dy[4] = { 1, 0, -1, 0 };
const ll INF = 1e14;
const ll MOD = 1e9 + 7;

struct P {
    double x;
    double y;
};

void print(P p)
{
    printf("%.8lf %.8lf\n", p.x, p.y);
}

void kock(int n, P p1, P p2)
{
    if (n == 0) {
        return;
    }
    P s, t, u;
    double th = M_PI * 60.0 / 180.0;
    s.x = (2.0 * p1.x + 1.0 * p2.x) / 3.0;
    s.y = (2.0 * p1.y + 1.0 * p2.y) / 3.0;
    t.x = (1.0 * p1.x + 2.0 * p2.x) / 3.0;
    t.y = (1.0 * p1.y + 2.0 * p2.y) / 3.0;
    u.x = (t.x - s.x) * cos(th) - (t.y - s.y) * sin(th) + s.x;
    u.y = (t.x - s.x) * sin(th) + (t.y - s.y) * cos(th) + s.y;
    kock(n - 1, p1, s);
    print(s);
    kock(n - 1, s, u);
    print(u);
    kock(n - 1, u, t);
    print(t);
    kock(n - 1, t, p2);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    P a, b;
    a.x = 0, a.y = 0, b.x = 100, b.y = 0;
    print(a);
    kock(n, a, b);
    print(b);
    return 0;
}