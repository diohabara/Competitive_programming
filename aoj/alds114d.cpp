#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (int i = 0; i < n; i++)
static const int dx[4] = { 0, 1, 0, -1 };
static const int dy[4] = { 1, 0, -1, 0 };
static const char dir[4] = { 'u', 'r', 'd', 'l' };
static const ll INF = 1 << 21;
static const ll MOD = 1e9 + 7;
class SuffixArray {
private:
    int n;
    vector<int> rank;
public:
    string s;
    vector<int> idx;
    SuffixArray(string& s)
        : n(s.size())
        , rank(s.size() + 1)
        , s(s)
        , idx(s.size() + 1)
    {
        rep(i, n + 1)
        {
            idx[i] = i;
            rank[i] = i < n ? s[i] : -1;
        }
        int k;
        auto comp = [&](const int i, const int j) -> bool {
            if (rank[i] != rank[j]) {
                return rank[i] < rank[j];
            } else {
                int ri = i + k <= n ? rank[i + k] : -1;
                int rj = j + k <= n ? rank[j + k] : -1;
                return ri < rj;
            }
        };

        vector<int> tmp(n + 1);
        for (k = 1; k <= n; k *= 2) {
            sort(idx.begin(), idx.end(), comp);

            tmp[idx[0]] = 0;
            for (int i = 1; i < n + 1; i++) {
                tmp[idx[i]] = tmp[idx[i - 1]] + (comp(idx[i - 1], idx[i]) ? 1 : 0);
            }
            rank = tmp;
        }
    }
    bool contain(string& t)
    {
        int right = n, left = 0;
        while (right - left > 1) {
            int mid = (right + left) / 2;
            if (s.substr(idx[mid], t.size()) < t) {
                left = mid;
            } else {
                right = mid;
            }
        }
        return s.substr(idx[right], t.size()) == t;
    }
};

int main()
{
    string T;
    int Q;
    cin >> T >> Q;

    SuffixArray suf(T);
    rep(i, Q)
    {
        string P;
        cin >> P;
        cout << suf.contain(P) << endl;
    }
    return 0;
}