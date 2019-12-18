#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cmath>
#include <string>
#include <vector>
#include <set>
using namespace std;


int main()
{
	cin.tie(0);
	ios::sync_with_stdio(false);
	int n;
    string s;
    cin >> n >> s;

    // 答えのカウントを初期化する
    int cnt_ans = 0;
    for (int i = 1; i < n-1; i++){
        // 前半と後半が一致していたときのカウントを初期化
        int cnt_same = 0;
        // cが'a'から'z'までとする
        for (char c = 'a'; c <= 'z'; c++){
            // 左右にcがあることをブール型で表現する
            bool left = false, right = false;
            // 前半にcがあるときはleftをtrueにする
            for (int j = 0; j < i; j++) {
                if (s[j] == c) {
                    left = true;
                }
            }
            // 後半にcがあるときはrightをtrueにする
            for (int j = i; j < n; j++) {
                if (s[j] == c) {
                    right = true;
                }
            }
            // 左右にcがあるときのみcnt_sameを増やす
            if (right && left) {
                    cnt_same++;
                }
            }
        // iの位置ごとにこの作業を行い，最大値を更新したときは値を更新する
        if (cnt_ans < cnt_same) {
            cnt_ans = cnt_same;
        }
    }
    cout << cnt_ans << endl;
    return 0;
}
