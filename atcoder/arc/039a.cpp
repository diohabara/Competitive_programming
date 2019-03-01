#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
#define ll long long
#define endl '\n'
using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    int a, b;
    cin >> a >> b;
    string a_str = to_string(a), b_str = to_string(b);
    a_str[0] = '9';
    int maxA = stoi(a_str) - stoi(b_str);
    a_str = to_string(a), b_str = to_string(b);
    b_str[0] = '1';
    maxA = max(stoi(a_str) - stoi(b_str), maxA);
    a_str = to_string(a), b_str = to_string(b);
    a_str[1] = '9';
    maxA = max(stoi(a_str) - stoi(b_str), maxA);
    a_str = to_string(a), b_str = to_string(b);
    b_str[1] = '0';
    maxA = max(stoi(a_str) - stoi(b_str), maxA);
    a_str = to_string(a), b_str = to_string(b);
    a_str[2] = '9';
    maxA = max(stoi(a_str) - stoi(b_str), maxA);
    a_str = to_string(a), b_str = to_string(b);
    b_str[2] = '0';
    maxA = max(stoi(a_str) - stoi(b_str), maxA);
    cout << maxA << endl;

    return 0;
}