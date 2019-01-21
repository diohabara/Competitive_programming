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
    int n, k, l[60];
    cin >> n >> k;
    for (int i = 0;i < n; i++) {
        cin >> l[i];
    }
    bubbleSort(l, n);
    int sum = 0;
    for (int i = 0; i < k; i++) {
        sum += l[n - i - 1];
    }
    cout << sum << endl;
	return 0;
}