#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define rep(i, n) for (ll i = 0; i < n ; ++i)
const ll INF = LLONG_MAX;
const ll MOD = 1e9+7;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    string s;
    cin >> s;
    int k;
    cin >> k;
    vector<string> vec;
    rep(i,s.size()) {
        for (int j = 1; j <= k; ++j) {
            string temp = s.substr(i, j);
            vec.push_back(temp);
        }
    }
    sort(vec.begin(), vec.end());
    vec.erase(unique(vec.begin(), vec.end()), vec.end());
    cout << vec[k - 1] << endl;
    return 0;
}