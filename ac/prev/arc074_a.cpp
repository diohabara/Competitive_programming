#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define rep(i, n) for (ll i = 0; i < n; ++i)
const ll INF = 1e9;
const ll MOD = 1e9 + 7;
int main()
{
    ll H, W;
    cin >> H >> W;
    ll s = H * W;
    ll sa, sb, sc;
    ll s_max, s_min;
    for (int h = 1; h <= H - 1; ++h) {
        sa = h * W;
        // vertical
        sb = (H - h) * (W / 2);
        sc = (H - h) * (W - W / 2);
        s_max = max({ sa, sb, sc });
        s_min = min({ sa, sb, sc });
        s = min(s, s_max - s_min);

        // horizontal
        sb = ((H - h) / 2) * W;
        sc = ((H - h) - (H - h) / 2) * W;
        s_max = max({ sa, sb, sc });
        s_min = min({ sa, sb, sc });
        s = min(s, s_max - s_min);
    }

    for (int w = 1; w <= W - 1; ++w) {
        sa = w * H;
        // vertical
        sb = (W - w) * (H / 2);
        sc = (W - w) * (H - H / 2);
        s_max = max({ sa, sb, sc });
        s_min = min({ sa, sb, sc });
        s = min(s, s_max - s_min);

        // horizontal
        sb = ((W - w) / 2) * H;
        sc = ((W - w) - (W - w) / 2) * H;
        s_max = max({ sa, sb, sc });
        s_min = min({ sa, sb, sc });
        s = min(s, s_max - s_min);
    }
    cout << s << endl;
    return 0;
}