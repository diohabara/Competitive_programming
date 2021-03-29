#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < n; i++)
#define LL long long
#define endl '\n'
using namespace std;

int main()
{
    cin.tie(0);
    ios::sync_with_stdio(false);
    int n, cnt = 0;
    string w;
    cin >> n;
    for (int i = 0; i < n; i++ ){
        cin >> w;
        if (w.find(".") != string::npos) {
            w.erase(w.size() - 1);
        }
        if ((w == "Takahashikun") || (w == "takahashikun") || (w == "TAKAHASHIKUN")) {
            cnt++;
        }
    }
    cout << cnt << endl;
    return 0;
}