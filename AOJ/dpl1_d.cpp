#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < n; i++)
#define LL long long
#define endl '\n'
using namespace std;
#define MAX 100000

int n, A[MAX + 1], L[MAX];

int lis() {
    L[0] = A[0];  // 長さが1であるようなisの最後の要素の最小値
    int length = 1;  // i番目の要素までを使ったlisの長さ

    for (int i = 0; i < n; i++) {
        if (L[length - 1] < A[i]) { // length-1までの要素を使ったlisの長さがi番目の要素より短いとき
            L[length++] = A[i]; // lenghtまでの要素を使ったlisの長さをA[i]に更新，そしてlengthがインクリメント
        } else {
            *lower_bound(L, L + length, A[i]) = A[i];  // L配列の中でlength番目までの要素でA[i]よりも大きくなる最初のものにA[i]を代入する
        }
    }
    return length;
}

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }
    cout << lis() << endl;

    return 0;
}