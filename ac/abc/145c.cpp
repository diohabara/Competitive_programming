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

double getSum(int n)
{

}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    ll N;
    cin >> N;
    vector<int> num(N);
    vector<pair<double, double>> len(N);
    rep(i, N)
    {
        num[i] = i + 1;
    }
    rep(i, N)
    {
        double x, y;
        cin >> len[i].first >> len[i].second;
    }

    cout << getSum(0) / ((N - 1) * (N - 1)) << endl;

    return 0;
}