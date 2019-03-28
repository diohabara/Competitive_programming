#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < n; i++)
#define repr(i, n) for(int i = n;i >= 0;i--)
#define for1(i, m, n) for(int i = m;i < n;i++)
#define ll long long
#define endl '\n'
using namespace std;


int main()
{
    // lower_boundは指定した値value以上の最初の要素のイテレータを返す関数
    // lower_bound(先頭のポインタ, 配列の末尾, 指定した値)
    // distanceはdistance(a, b)でポインタaとポインタbの距離を返す関数
	cin.tie(0);
	ios::sync_with_stdio(false);
    int A[14] = {1, 1, 2, 2, 2, 4, 5, 5, 6, 8, 8, 8, 10, 15};
    int *pos;
    int idx;

    // lower_boundは3以上で最初の要素のポインタを返す
    pos = lower_bound(A, A + 14, 3);
    idx = distance(A, pos);
    cout << "A[" << idx << "] = " << *pos << endl;  // A[5] = 4

    // lower_boundは2以上で最初の要素のポインタを返す
    pos = lower_bound(A, A + 14, 2);
    idx = distance(A, pos);
    cout << "A[" << idx << "] = " << *pos << endl; // A[2] = 2

	return 0;
}