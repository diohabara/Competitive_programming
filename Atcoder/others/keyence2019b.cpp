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
    string s;
    cin >> s;
    int start, end;
    for (int i1 = 0; i1 < s.size(); i1++) {
        start = i1;
        if (s[i1] == 'k') {
            for (int i2 = i1+1; i2 < s.size(); i2++) {
                if (s[i2] == 'e') {
                    for (int i3 = i2+1; i3 < s.size(); i3++) {
                        if (s[i3] == 'y') {
                            for (int i4 = i3+1; i4 < s.size(); i4++) {
                                if (s[i4] == 'e') {
                                    for (int i5 = i4+1; i5 < s.size(); i5++) {
                                        if (s[i5] == 'n') {
                                            for (int i6 = i5+1; i6 < s.size(); i6++) {
                                                if (s[i6] == 'c') {
                                                    for (int i7 = i6+1; i7 < s.size(); i7++) {
                                                        if (s[i7] == 'e') {
                                                            end = i7;
                                                            if (start == 0 || end == s.size() -1) {
                                                                puts("YES");
                                                                return 0;
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    puts("NO");
	return 0;
}