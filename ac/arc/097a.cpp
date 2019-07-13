#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define rep(i, n) for (ll i = 0; i < n; ++i)
const ll INF = LLONG_MAX;
const ll MOD = 1e9 + 7;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    string s;
    cin >> s;
    sort(s.begin(), s.end());
    int k;
    cin >> k;
    do {
        cout << s << endl;
    } while(next_permutation(s.begin(), s.begin()+k)
    return 0;
}