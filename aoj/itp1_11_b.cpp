#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
#define ll long long
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
            case 'R': {
                buf = v[1];
                v[1] = v[2];
                v[2] = v[4];
                v[4] = v[3];
                v[3] = buf;
            }
        }
    }
    int top() { return v[0]; }
    int right() { return v[2]; }
    int left() { return v[3]; }
    int front() { return v[1]; }
};

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    dice d;
    for (int i = 0; i < 6; i++) {
        cin >> d.v[i];
    }
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int a, b;
        cin >> a >> b;
        if (d.left() == a) {
            d.mov('E');
        }
        if (d.right() == a) {
            d.mov('W');
        }
        while(d.top() != a) {
            d.mov('N');
        }
        while(d.front() != b) {
            d.mov('R');
        }
        cout << d.right() << endl;
    }
    return 0;
}