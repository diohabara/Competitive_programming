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
    string s;
    int k;
    cin >> s >> k;


    // sのサイズよりもkの方が大きいときは0
    if (s.size() < k) {
        cout << 0 << endl;
        return 0;
    }

    // sの先頭から1文字ずつずらす．k文字ずつ取得する
    vector<string> a(s.size() - k + 1);
    for (int i = 0; i < (s.size()-k+1); i++) {
        a.at(i) = s.substr(i, k);
    }

    // アルファベット順に並び替え
    sort(a.begin(), a.end());

    // 最後の要素の分を数えて，それ以外は後ろに同じのが無い限りcnt++
    int cnt = 1;
    for (int i = 0; i < a.size() - 1; i++) {
        if (a.at(i) != a.at(i+1)) {
            cnt++;
        }
    }

    cout << cnt << endl;
    return 0;
}