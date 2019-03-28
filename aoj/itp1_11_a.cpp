#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < n; i++)
#define LL long long
#define endl '\n'
using namespace std;

struct dice {
    int v[6];
    void mov(const char c) {
        int buf;
        switch (c) {
            case 'N':
                buf = v[0];
                v[0] = v[1];
                v[1] = v[5];
                v[5] = v[4];
                v[4] = buf;
                break;
            case 'E': {
                buf = v[0];
                v[0] = v[3];
                v[3] = v[5];
                v[5] = v[2];
                v[2] = buf;
                break;
            }
            case 'W': {
                buf = v[0];
                v[0] = v[2];
                v[2] = v[5];
                v[5] = v[3];
                v[3] = buf;
                break;
            }
            case 'S': {
                buf = v[0];
                v[0] = v[4];
                v[4] = v[5];
                v[5] = v[1];
                v[1] = buf;
                break;
            }
        }
    }
    int top() { return v[0]; }
};

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    dice d;
    int in[6];
    for (int i = 0; i < 6; i++) {
        cin >> d.v[i];
    }
    string s;
    cin >> s;
    for (int i = 0; i < s.size(); i++) {
        d.mov(s[i]);
    }
    cout << d.top() << endl;
    return 0;
}