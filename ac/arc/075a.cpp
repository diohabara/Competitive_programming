#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int N;
    ll ans = 0;
    cin >> N;
    vector<int> s(N);
    for (int i = 0; i < N; i++) {
        cin >> s[i];
        ans += s[i];
    }

    sort(s.begin(), s.end());
    if (ans % 10 == 0) {
        for (int i = 0; i < N; i++) {
            if (s[i] % 10 != 0) {
                ans -= s[i];
                break;
            }
            if (i == N - 1)
                ans = 0;
        }
    }
    cout << ans << endl;
}
