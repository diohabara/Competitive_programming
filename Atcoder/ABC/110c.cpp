#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < n; i++)
#define LL long long
#define endl '\n'
using namespace std;

int main()
{
    cin.tie(0);
    ios::sync_with_stdio(false);
    string s, t;
    int cnt1[26] = {}, cnt2[26] = {};
    cin >> s >> t;
    for (int i = 0; s[i]; i++) {
        cnt1[s[i] - 'a']++;
        cnt2[t[i] - 'a']++;
    }
    sort(cnt1, cnt1+26);
    sort(cnt2, cnt2+26);
    for (int i = 0; i < 26; i++) {
        if (cnt1[i] != cnt2[i]) {
            puts("No");
            return 0;
        }
    }
    puts("Yes");
    return 0;
}