#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cmath>
#include <string>
#include <vector>
#include <set>
using namespace std;
#define MAX 100000


int main()
{
	cin.tie(0);
	ios::sync_with_stdio(false);
    int n;
    cin >> n;
    
    int rest_tile = MAX, min_gap = MAX;
    for (int height = 1; height <= n; height++) {
        for (int width = 1; width * height <= n; width++) {
            if (n - height * width >= 0){
                rest_tile = n - height * width;
                if(abs(height - width) + rest_tile < min_gap){
                    min_gap = abs(height - width) + rest_tile;
                }
            }
        }
    }
    cout << min_gap << endl;
	return 0;
}