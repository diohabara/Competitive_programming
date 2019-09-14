#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define rep(i, n) for (ll i = 0; i < n; ++i)
#define ALL(a) a.begin(), a.end()
ll dx[4] = { 0, 1, 0, -1 };
ll dy[4] = { 1, 0, -1, 0 };
const ll INF = 1e14;
const ll MOD = 1e9 + 7;

ll N;

bool isValid(vector<ll>& a, vector<ll>& b, ll sum)
{
    ll cntPlus1 = 0, cntPlus2 = 0;
    rep(i, N)
    {
        if (a[i] > b[i]) {
            cntPlus1 += a[i] - b[i];
        }
        if (a[i] < b[i]) {
            ll tmp = b[i] - a[i];
            cntPlus2 += (tmp + 1) / 2;
        }
    }
    return cntPlus1 <= sum && cntPlus2 <= sum;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cin >> N;
    vector<ll> a(N), b(N);
    ll sumA = 0, sumB = 0;
    rep(i, N)
    {
        cin >> a[i];
        sumA += a[i];
    }
    rep(i, N)
    {
        cin >> b[i];
        sumB += b[i];
    }

    if (isValid(a, b, sumB - sumA)) {
        puts("Yes");
    } else {
        puts("No");
    }
    return 0;
}