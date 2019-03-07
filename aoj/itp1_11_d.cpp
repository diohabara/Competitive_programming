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

bool same(dice a, dice b) {
    for (int i = 0; i < 6; i++) {
        if (a.v[i] != b.v[i]) {
            return false;
        }
    }
    return true;
}

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    int n;
    cin >> n;
    dice d[100];
    bool have_same = true;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 6; j++) {
            cin >> d[i].v[j];
        }
    }

    for (int k = 0; k < n - 1; k++) {
        for (int l = k + 1; l < n; l++) {
            bool tmp = false;
            for (int i = 0; i < 4; i++) {
                d[l].mov('E');
                for (int j = 0; j < 4; j++) {
                    d[l].mov('N');
                    if (same(d[k], d[l])) {
                        tmp = true;
                    }
                }
            }
            d[l].mov('R');
            for (int i = 0; i < 4; i++) {
                d[l].mov('E');
                for (int j = 0; j < 4; j++) {
                    d[l].mov('N');
                    if (same(d[k], d[l])) {
                        tmp = true;
                    }
                }
                if (tmp) {
                    have_same = false;
                }
            }
        }
    }
    cout << (have_same ? "Yes" : "No") << endl;
}