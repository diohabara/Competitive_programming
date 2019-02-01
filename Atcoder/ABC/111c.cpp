#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < n; i++)
#define LL long long
#define endl '\n'
using namespace std;

int main()
{
    cin.tie(0);
    ios::sync_with_stdio(false);
    int n;
    set<int> odd, even;
    cin >> n;
    REP(i, n) {
        int m;
        cin >> m;
        if (i % 2 ==0) {
            odd.insert(m);
        } else {
            even.insert(m);
        }
    }
    if (odd.size() == 1 && even.size() == 1) {
        if (even.find(odd.)
    }
    return 0;
}