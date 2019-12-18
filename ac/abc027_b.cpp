#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cmath>
#include <string>
#include <vector>
using namespace std;

int main()
{
    int N, a[110], total = 0, same = 0, first;
    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> a[i];
        total += a[i];
        first = a[0];
        if (a[i] == first){
            same++;
        }
    }

    if (total % N != 0) {
        cout << -1 << endl;
        return 0;
    }

    if (same == N) {
        cout << 0 << endl;
        return 0;
    }

    int ave = total / N;

    int bridge = N, left_sum = 0, islands = 0;
    for (int i = 0; i < N; i++) {
        left_sum += a[i];
        islands++;
        if(left_sum == ave * islands){
            bridge--;
            left_sum = 0;
            islands = 0;
            }
    }
    cout << bridge << endl;
    return 0;
}