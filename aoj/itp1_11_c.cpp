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
    bool compare(dice a) {
        for (int i = 0; i < 6; i++) {
            if (v[i] != a.v[i]) {
                return false;
            }
        }
        return true;
    }
};

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    dice d1, d2;
    for (int i = 0; i < 6; i++) {
        cin >> d1.v[i];
    }
    for (int i = 0; i < 6; i++) {
        cin >> d2.v[i];
    }
    for (int i = 0; i < 4; i++) {
        d1.mov('E');
        for (int j = 0; j < 4; j++) {
            d1.mov('N');
            if (d1.compare(d2)) {
                puts("Yes");
                return 0;
            }
        }
    }
    d1.mov('R');
    for (int i = 0; i < 4; i++) {
        d1.mov('E');
        for (int j = 0; j < 4; j++) {
            d1.mov('N');
            if (d1.compare(d2)) {
                puts("Yes");
                return 0;
            }
        }
    }
    puts("No");
    return 0;
}