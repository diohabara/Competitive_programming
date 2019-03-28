#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < n; i++)
#define repr(i, n) for(int i = n;i >= 0;i--)
#define for1(i, m, n) for(int i = m;i < n;i++)
#define ll long long
#define endl '\n'
using namespace std;


int main()
{
	cin.tie(0);
	ios::sync_with_stdio(false);
    priority_queue<int> PQ;

    PQ.push(1);
    PQ.push(8);
    PQ.push(3);
    PQ.push(5);

    cout << PQ.top() << " ";  // 8
    PQ.pop();

    cout << PQ.top() << " "; // 5
    PQ.pop();

    PQ.push(11);

    cout << PQ.top() << " "; // 11
    PQ.pop();

    cout << PQ.top() << endl;  // 3
    PQ.pop();

	return 0;
}