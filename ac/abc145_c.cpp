#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)n; ++i)
static const int dx[4] = { 0, 1, 0, -1 };
static const int dy[4] = { 1, 0, -1, 0 };
static const char dir[4] = { 'u', 'r', 'd', 'l' };
static const ll INF = 1 << 21;
static const ll MOD = 1e9 + 7;

double sum = 0;
int x[10], y[10];

double dist(int i, int j)
{
    double dx = x[i] - x[j];
    double dy = y[i] - y[j];
    return pow(dx * dx + dy * dy, 0.5);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    ll N;
    cin >> N;
    vector<int> v(N);
    double sum = 0.0;
    rep(i, N)
    {
        cin >> x[i] >> y[i];
        v[i] = i;
    }
    cout.precision(10);

    do {
        rep(i, N - 1)
        {
            sum += dist(v[i], v[i + 1]);
        }
    } while (next_permutation(v.begin(), v.end()));
    int fact = 1;
    for (int i = 2; i <= N; i++) {
        fact *= i;
    }
    cout << sum / fact << endl;
    return 0;
}