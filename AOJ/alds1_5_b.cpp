#include <iostream>
using namespace std;
#define MAX 5000000
#define SENTINEL 2000000000

int L[MAX/2+2], R[MAX/2+2];
int cnt;

void merge(int A[], int n, int left, int mid, int right)
{
    // 左端から中心(or中心+1)までの要素数
    int n1 = mid - left;
    // 中心(or中心+1)から右端までの要素数
    int n2 = right - mid;

    // L, Rはそれぞれ配列Aの左側の配列，右側の配列
    for (int i = 0; i < n1; i++) {
        L[i] = A[left + i];  // Aの左側の値
    }
    for (int i = 0; i < n2; i++) {
        R[i] = A[mid + i];  // Aの右側の値
    }

    // LとRの最後の要素を十分大きな値とする
    // これによってLorRが先に最後の値まで到達したときに，LとRで要素を比較するので要素が残った方をAに入れる
    L[n1] = R[n2] = SENTINEL;
    int i = 0, j = 0;
    // kはmergeする対象となる2つの数列のうち，最小の添字から最大の添字まで
    // ここで元の配列AにLとRの要素を比較して整列させた値を入れる
    for (int k = left; k < right; k++) {
        cnt++;
        // Aの要素をRとLの小さい方から埋めていく
        if (L[i] <= R[j]) {
            A[k] = L[i++];
        } else {
            A[k] = R[j++];
        }
    }
}

void mergeSort(int A[], int n, int left, int right)
{

    if (left+1 < right) {
        // 要素が2つになるまでmergeSortをする
        int mid = (left + right) / 2;  // midを奇数のときは中心，偶数のときは右半分の左端
        mergeSort(A, n, left, mid);
        mergeSort(A, n, mid, right);
        // 要素が2つになったら2->4->8->...と2のべき乗以下の大きさまとまりを作る
        // 2^n(n = 1, 2, ...)個ごとに小さいものからAにmergeする
        merge(A, n, left, mid, right);
    }
}

int main()
{
    int A[MAX], n, i;
    cnt = 0;

    cin >> n;
    for (i = 0; i < n; i++) cin >> A[i];

    mergeSort(A, n, 0, n);

    for (i = 0; i < n; i++) {
        if (i) cout << ' ';
        cout << A[i];
    }
    cout << endl;

    cout << cnt << endl;

    return 0;
}