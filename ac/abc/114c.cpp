/*
#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cmath>
#include <string>
#include <vector>
#include <set>
#include <stack>
using namespace std;

bool divide(int n)
{
    int cnt_other = 0, cnt3 = 0, cnt5 = 0, cnt7 = 0;
    while(n > 0){
        int tmp = n % 10;
        switch(tmp) {
			case 3: cnt3++; break;
			case 5: cnt5++; break;
			case 7: cnt7++; break;
			default: cnt_other++; break;
		}
        n /= 10;
    }
    if (cnt_other == 0 && cnt3 > 0 && cnt5 > 0 && cnt7 > 0) {
        return true;
    } else {
        return false;
    }
}

int main()
{
	cin.tie(0);
	ios::sync_with_stdio(false);
	int n;
	scanf("%d", &n);

    int cnt = 0;
    for (int i = 1; i <= n; i++) {
        if (divide(i)) {
            cnt++;
        }
    }
    printf("%d\n", cnt);
	return 0;
}
*/
#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cmath>
#include <string>
#include <vector>
#include <set>
#include <stack>
#include <functional>
#define ll long long
using namespace std;

// 求める数が何回出てきたかと10桁の整数を用意する
int cnt = 0;
string t(10, '#');

bool check753(string s)
{
    // 文字列'7', '5', '3'が出てきたか判断する
    bool seven = false, five = false, three = false;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '7') seven = true;
        if (s[i] == '5') five = true;
        if (s[i] == '3') three = true;
    }
    if (seven && five && three) {
        return true;
    } else {
        return false;
    }
}

void generate753(int i, int n, string s) {
    if (i == n) {
        string num = t.substr(0, n);  // numはtのn桁目まで
        if (stoi(num) <= stoi(s) && check753(num)) {  // numがsより小さくnumが準753数のとき
            cnt++;
        }
        return;
    }
    // n桁の3or5or7で出来た数を作る
    t[i] = '3';
    generate753(i + 1, n, s);
    t[i] = '5';
    generate753(i + 1, n, s);
    t[i] = '7';
    generate753(i + 1, n, s);
}

int main(int argc, char const *argv[])
{
    string s;
    cin >> s;

    // 1桁からn桁まで準753数を作る
    for (int i = 1; i <= s.size(); i++) {
        generate753(0, i, s);
    }

    cout << cnt << '\n';
    return 0;
}