#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < n; i++)
#define repr(i, n) for(int i = n;i >= 0;i--)
#define for1(i, m, n) for(int i = m;i < n;i++)
#define ll long long
#define endl '\n'
using namespace std;


bool check(string s) {
    // 文字列sが回文になっているか判定する
	int size = s.size();
	bool flag = true;
	for(int i = 0; i < size / 2; i++) {
        // '.'はどんな文字でも良い(正規表現)
		if (s[size - i - 1] != '.' && s[i] != s[size - i - 1]) {
            flag = false;  // 文字列の最初から最後まで調べて違った場合はflagをfalseにする
        }
	}
	return flag;
}

int main() {
	string s;
	cin >> s;
	int ans;
	rep(i, s.size()) {
		string t;  // 文字列tを定義する
		rep(j, i)t += '.';  // 文字列tにi回'.'を足す
		if (check(s + t)) { ans = i; break; }  // 文字列が回文の時のtの長さ(= i)を出力する
	}
	cout << ans << endl;
}