#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define rep(i, n) for (ll i = 0; i < n; ++i)
#define ALL(a) a.begin(), a.end()
ll dx[4] = { 0, 1, 0, -1 };
ll dy[4] = { 1, 0, -1, 0 };
const ll INF = 1e14;
const ll MOD = 1e9 + 7;

#define MAX 100000
int n, k;
ll w[MAX];

int check(ll P) {
    int i = 0;
    rep(j, k) {
        ll sum = 0;
        while(sum + w[i] <= P) {
            sum += w[i];
            i++;
            if (i == n) {
                return n;
            }
        }
    }
    return i;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cin >> n >> k;
    rep(i, n) { cin >> w[i]; }
    ll left = 0, right = MAX * 10000, mid;
    while(right - left > 1) {
        mid = (left + right) / 2;
        int v = check(mid);
        if (v >= n) {
            right = mid;
        } else {
            left = mid;
        }
    }
    cout << right << endl;
    return 0;
}