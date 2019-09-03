#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define rep(i, n) for (ll i = 0; i < n; ++i)
#define ALL(a) a.begin(), a.end()
ll dx[4] = { 0, 1, 0, -1 };
ll dy[4] = { 1, 0, -1, 0 };
const ll INF = 1e14;
const ll MOD = 1e9 + 7;
int head, tail, n, q;
const int MAX = 100010;

typedef struct pp {
    string n;
    int t;
} P;

P Q[MAX];

void initialize() { head = tail = 0; }

bool isEmpty() { return head == tail; }

bool isFull() { return head == (tail + 1) % MAX; }

void enqueue(P x)
{
    Q[tail] = x;
    tail = (tail + 1) % MAX;
}

P dequeue()
{
    P x = Q[head];
    head = (head + 1) % MAX;
    return x;
}

int main()
{
    ios_base::sync_with_stdio(false);
    int elaps = 0, min_num;
    P q_ele;
    cin.tie(0);
    // input
    cin >> n >> q;
    rep(i, n)
    {
        string name;
        int time;
        cin >> name >> time;
        Q[i].n = name;
        Q[i].t = time;
    }
    // output
    head = 0, tail = n;
    while (head != tail) {
        q_ele = dequeue();
        min_num = min(q, q_ele.t);
        q_ele.t -= min_num;
        elaps += min_num;
        if (q_ele.t > 0) {
            enqueue(q_ele);
        } else {
            cout << q_ele.n << " " << elaps << endl;
        }
    }
    return 0;
}