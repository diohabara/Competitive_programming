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
    int n, a[110];
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    bubbleSort(a, n);
    int even = 0, odd = 0;
    for (int i = 0; i < n; i++) {
        if (i % 2 == 0)
            even += a[i];
        else
            odd += a[i];
    }
    cout << abs(even - odd) << endl;
	return 0;
}