#include <algorithm>
#include <cstdio>
#include <vector>
using namespace std;

class Node {
public:
    int location; // 位置
    int p, l, r; // ポイントの親，左の子，右の子
    Node() {}
};

class Point {
public:
    int id, x, y;
    Point() {}
    // 点の中身を定める
    Point(int id, int x, int y)
        : id(id) // 値
        , x(x) // x座標
        , y(y) // y座標
    {
    }
    bool operator<(const Point& p) const // 比較演算子をオーバーロード
    {
        return id < p.id;
    }

    void print()
    {
        printf("%d\n", id); // coutより高速なprintf関数を使用
    }
};

static const int MAX = 1000000;
static const int NIL = -1;

int N;
Point P[MAX]; // 入力のポイントを入れるもの
Node T[MAX]; // ポイントの位置情報を格納
int np;

// p1とp2のx座標の大きさを比較
bool lessX(const Point& p1, const Point& p2)
{
    return p1.x < p2.x;
}
// p1とp2のy座標の大きさを比較
bool lessY(const Point& p1, const Point& p2)
{
    return p1.y < p2.y;
}

int makeKDTree(int l, int r, int depth)
{
    // 2次元の木構造を作る
    if (!(l < r)) { // 左端が右端以上に右にあるときは終了
        return NIL;
    }
    int mid = (l + r) / 2;
    int t = np++; // 二分木のノード番号を設定
    if (depth % 2 == 0) { // 木の深さが偶数の時(xの層)
        sort(P + l, P + r, lessX); // lからrまでxについて昇順で整列
    } else { // 木の深さが奇数の時(yの層)
        sort(P + l, P + r, lessY); // lからrまでyについて昇順で整列
    }
    // 以上の処理をすべての入力ポイントに関して行う
    T[t].location = mid;
    T[t].l = makeKDTree(l, mid, depth + 1);
    T[t].r = makeKDTree(mid + 1, r, depth + 1);

    return t;
}

/*
    v:ノードの値
    sx, tx, sy, ty:指定された座標
    depth:木の深さ(初期値は0)
    ans:答えを格納するvector
*/
void find(int v,
    int sx,
    int tx,
    int sy,
    int ty,
    int depth,
    vector<Point>& ans)
{
    // x, yはノードの座標
    int x = P[T[v].location].x;
    int y = P[T[v].location].y;
    // ノードの座標が指定された座標に収まるときはansに加える
    if (sx <= x && x <= tx && sy <= y && y <= ty) {
        ans.push_back(P[T[v].location]);
    }

    // ノードの座標が指定された座標に収まらない時
    // 根から葉に行くにつれて大きく(or小さく)なるのでもし左端，右端にも入らなかった場合は
    // それより葉側のノードも範囲外->探索する必要はない
    if (depth % 2 == 0) { // 深さが偶数の時x軸に関して探索
        if (T[v].l != NIL) {
            if (sx <= x) {
                find(T[v].l, sx, tx, sy, ty, depth + 1, ans);
            }
        }
        if (T[v].r != NIL) {
            if (x <= tx) {
                find(T[v].r, sx, tx, sy, ty, depth + 1, ans);
            }
        }
    } else { // 深さが偶数の時y軸に関して探索
        if (T[v].l != NIL) {
            if (sy <= y) {
                find(T[v].l, sx, tx, sy, ty, depth + 1, ans);
            }
        }
        if (T[v].r != NIL) {
            if (y <= ty) {
                find(T[v].r, sx, tx, sy, ty, depth + 1, ans);
            }
        }
    }
}

int main()
{
    int x, y;
    scanf("%d", &N);
    for (int i = 0; i < N; i++) {
        scanf("%d %d", &x, &y); // cinより高速なscanf関数を使用
        P[i] = Point(i, x, y);
        T[i].l = T[i].r = T[i].p = NIL; // Tには親，子を設定しない
    }

    np = 0;

    int root = makeKDTree(0, N, 0);

    int q;
    scanf("%d", &q);
    int sx, tx, sy, ty;
    vector<Point> ans;
    for (int i = 0; i < q; i++) {
        scanf("%d %d %d %d", &sx, &tx, &sy, &ty);
        ans.clear();
        find(root, sx, tx, sy, ty, 0, ans);
        sort(ans.begin(), ans.end()); // 答えを昇順にソート
        for (int j = 0; j < ans.size(); j++) {
            ans[j].print(); // 昇順で出力
        }
        printf("\n");
    }

    return 0;
}