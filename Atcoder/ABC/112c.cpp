#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; i++)
typedef long long ll;

int main(){
    // input
    int n;
    cin >> n;
    int x[n], y[n], h[n];
    rep(i, n){
        cin >> x[i] >> y[i] >> h[i];
        // if h[i] is bigger than 0, i group will be the 0 group
        if(h[i] > 0){
            swap(x[0], x[i]);
            swap(y[0], y[i]);
            swap(h[0], h[i]);
        }
    }

    bool checker;
    rep(cx, 101){
        rep(cy, 101){
            // brute-force attack of (cx, cy)
            // ch is the center height
            // che starts with the maximum height
            int ch = h[0] + abs(x[0] - cx) + abs(y[0] - cy);
            checker = true;
            rep(i, n){
                // if ch meets the condition, the (cx, cy, ch) is the answer
                if( max( ch - abs( x[i] - cx ) - abs( y[i] - cy ), 0) != h[i]){
                    checker = false;
                }
            }
            if(checker){
                cout << cx << " "<< cy << " " << ch << endl;
                return 0;
            }
        }
    }



    return 0;
}
