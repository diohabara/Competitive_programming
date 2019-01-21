#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cmath>
#include <string>
#include <vector>
#include <set>
using namespace std;


int main()
{
	cin.tie(0);
	ios::sync_with_stdio(false);
    int x = 0, y = 0, t;
    string s;
    cin >> s >> t;

    int cnt_question = 0;
    for (int i = 0; i < s.size(); i++) {
        switch (s[i]){
            case 'L': x--; break;
            case 'R': x++; break;
            case 'U': y++; break;
            case 'D': y--; break;
            default: cnt_question++;
        }
    }
    int total = abs(x) + abs(y);

    if (t == 1) {
        cout << total + cnt_question << endl;
        return 0;
    }
    else {
        if (total - cnt_question < 0) {
            if (abs(total - cnt_question) % 2 == 0) {
                cout << 0 << endl;
            }
            else cout << 1 << endl;
        }
        else cout << total - cnt_question << endl;
    }

	return 0;
}