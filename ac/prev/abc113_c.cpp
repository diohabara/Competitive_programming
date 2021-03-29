#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cmath>
#include <string>
#include <vector>
#include <set>
#include <stack>
#include <functional>
#define rep(i, n) for(int i = 0; i < n; i++)
#define ll long long
using namespace std;


int n, m;
int p[100000], y[100000];
vector<int> indx[100001];  // indxは市．要素番号に県，要素は誕生年．

int main()
{
	cin.tie(0);
	ios::sync_with_stdio(false);

    // input
    scanf("%d %d", &n, &m);
    rep(i, m) {
        scanf("%d%d", &p[i], &y[i]);
        // 市[県]<-誕生年
        indx[p[i]].push_back(y[i]);
    }
    rep(i, n) {
        // 1~nまでの県でそれぞれ誕生年を比較してソートを行う
        sort(indx[i+1].begin(), indx[i+1].end());
    }
    rep(i, m) {
        // 最初の6桁は市ごとの県
        // 次の6桁は市の誕生年より小さいときの都市を小さいものからの順にしたもの
        // lower_bound(vectorの要素, vectorの要素, 基準とする値)で初めから見て何番目のイテレータか返す
        printf("%012lld\n", (ll)(p[i]) * 1000000 + (lower_bound(indx[p[i]].begin(), indx[p[i]].end(), y[i]) - indx[p[i]].begin()) + 1);
    }

	return 0;
}