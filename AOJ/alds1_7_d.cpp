#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;

int n, pos;  // nは木の数，posは位置情報
vector<int> pre, in, post;

void rec(int l, int r)
{
    // preで出てきた節点をmとする
    // この節点mに対してinで探索をすると，左部分木(mより前の木)と右部分木(mより後の木)がわかる
    if (l >= r) { // lがr以上の時探索ができないので終了
        return;
    }
    int root = pre[pos++];  // preで出てきた節点をmとする
    int m = distance(in.begin(), find(in.begin(), in.end(), root));  // inにおけるmの位置
    rec(l, m);  // そのnodeより左側を探索する．左側から探索
    rec(m + 1, r);  // 右側を探索．右側はあとで探索
    post.push_back(root);  // leafまで行けばもう探索できずpostの中に入る
}

void solve()
{
    pos = 0;
    rec(0, pre.size());  // postを復元する
    for (int i = 0; i < n; i++) {
        if (i) cout << " ";
        cout << post[i];
    }
    cout << endl;
}

int main()
{
    int k;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> k;
        pre.push_back(k);  // preorderで通ったnodeをpreに入れる
    }

    for (int i = 0; i < n; i++) {
        cin >> k;
        in.push_back(k);  // inorderで通ったnodeをinに入れる
    }

    solve();

    return 0;
}