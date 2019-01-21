#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cmath>
#include <string>
#include <vector>
#include <set>
#include <stack>
#include <functional>
#define ll long long
using namespace std;


int main()
{
	cin.tie(0);
	ios::sync_with_stdio(false);
    double deg;
    double dis;
    cin >> deg >> dis;
    double w;
    string dir;


    dis /= 60;
    w = round(dis * 10) / 10;


    deg /= 10;
    const double gap = 22.5;
    const double origin = 11.25;
    if (origin <= deg && deg < origin + gap) {
        dir = "NNE";
    } else if (origin+gap<= deg && deg < origin+gap*2) {
        dir = "NE";
    } else if (origin+gap*2 <= deg && deg < origin+gap*3) {
        dir = "ENE";
    } else if (origin+gap*3 <= deg && deg < origin+gap*4) {
        dir = "E";
    } else if (origin+gap*4 <= deg && deg < origin+gap*5) {
        dir = "ESE";
    } else if (origin+gap*5 <= deg && deg < origin+gap*6) {
        dir = "SE";
    } else if (origin+gap*6 <= deg && deg < origin+gap*7) {
        dir = "SSE";
    } else if (origin+gap*7 <= deg && deg < origin+gap*8) {
        dir = "S";
    } else if (origin+gap*8 <= deg && deg < origin+gap*9) {
        dir = "SSW";
    } else if (origin+gap*9 <= deg && deg < origin+gap*10) {
        dir = "SW";
    } else if (origin+gap*10 <= deg && deg < origin+gap*11) {
        dir = "WSW";
    } else if (origin+gap*11 <= deg && deg < origin+gap*12) {
        dir = "W";
    } else if (origin+gap*12 <= deg && deg < origin+gap*13) {
        dir = "WNW";
    } else if (origin+gap*13 <= deg && deg < origin+gap*14) {
        dir = "NW";
    } else if (origin+gap*14 <= deg && deg < origin+gap*15) {
        dir = "NNW";
    } else {
        dir = "N";
    }


    if (w <= 0.2) {
        cout << "C " << 0 << endl;
    } else if (w <= 1.5) {
        cout << dir << ' ' << 1 << endl;
    } else if (w <= 3.3) {
        cout << dir << ' ' << 2 << endl;
    } else if (w <= 5.4) {
        cout << dir << ' ' << 3 << endl;
    } else if (w <= 7.9) {
        cout << dir << ' ' << 4 << endl;
    } else if (w <= 10.7) {
        cout << dir << ' ' << 5 << endl;
    } else if (w <= 13.8) {
        cout << dir << ' ' << 6 << endl;
    } else if (w <= 17.1) {
        cout << dir << ' ' << 7 << endl;
    } else if (w <= 20.7) {
        cout << dir << ' ' << 8 << endl;
    } else if (w <= 24.4) {
        cout << dir << ' ' << 9 << endl;
    } else if (w <= 28.4) {
        cout << dir << ' ' << 10 << endl;
    } else if (w <= 32.6) {
        cout << dir << ' ' << 11 << endl;
    } else{
        cout << dir << ' ' << 12 << endl;
    }
	return 0;
}