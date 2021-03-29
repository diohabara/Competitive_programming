#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cmath>
#include <string>
#include <vector>
using namespace std;


int main(){
	cin.tie(0);
	ios::sync_with_stdio(false);
    int n, m;
    cin >> n >> m;

    double n_angle, m_angle;
    if (n >= 0 && n <= 11) n_angle = n * 30;
    else n_angle = (n - 12) * 30;
    m_angle = 6 * m;
    n_angle += m * 0.5;

    double angle = abs(n_angle - m_angle);
    if (angle >= 180) {
        angle = 360 - angle;
    }

    cout << angle << endl;
	return 0;
}