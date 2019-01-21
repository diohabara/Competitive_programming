#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cmath>
#include <string>
#include <vector>
#include <set>
#include <stack>
#include <functional>
using namespace std;
void bubbleSort(int A[], int N)
{
	bool flag = 1;
	for (int i = 0; flag; i++) {
		flag = 0;
		for (int j = N-1; j >= i + 1; j--) {
			if (A[j] < A[j - 1]) {
			// 隣接要素を交換する
				swap(A[j], A[j-1]);
				flag = 1;
			}
		}
	}
}


int main()
{
	cin.tie(0);
	ios::sync_with_stdio(false);
    int n, d[110];
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> d[i];
    }
    bubbleSort(d, n);

    int max = d[0], cnt = 1;
    for (int i = 1; i < n; i++) {
        if (d[i] > max) {
            max = d[i];
            cnt++;
        }
    }
    cout << cnt << endl;
	return 0;
}