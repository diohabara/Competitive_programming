#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < n; i++)
#define repr(i, n) for(int i = n;i >= 0;i--)
#define for1(i, m, n) for(int i = m;i < n;i++)
#define ll long long
#define endl '\n'
using namespace std;

void print(map<string, int> T)
{
    map<string, int>::iterator it;
    cout << T.size() << endl;
    for (it = T.begin(); it != T.end(); it++) {
        pair<string, int>item = *it;
        cout << item.first << " --> " << item.second << endl;
    }
}

int main()
{
	cin.tie(0);
	ios::sync_with_stdio(false);
    map<string, int> T;
    T["red"] = 32;
    T["blue"] = 688;
    T["yellow"] = 122;

    T["blue"] += 312;

    print(T);

    T.insert(make_pair("zebra", 101010));
    T.insert(make_pair("white", 0));
    T.erase("yellow");

    print(T);

    pair<string, int> target = *T.find("red");
    cout << target.first << " --> " << target.second << endl;

    return 0;

	return 0;
}