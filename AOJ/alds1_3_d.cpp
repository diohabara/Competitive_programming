#include<iostream>
#include<stack>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    // iは現在の'/'の位置
    // jは対応する'\\'の位置
    // S1は'\\'を積むstack, S2は'/'を積んだときに<pair>(対応する'\\'の位置jと，水たまりの面積a)を積む
    // i-jは新しい水たまりの面積で，これまでの面積と足すとsumになる
    stack<int> S1;
    stack<pair<int, int> > S2;
    char ch;  // 入力の記号
    int sum = 0;  // 水たまりの総面積
    for(int i = 0; cin >> ch; i++){
        if(ch == '\\') S1.push(i);  // 入力が'\\'のとき，S1の最後の要素をその時のiに
        else if(ch == '/' && S1.size() > 0){  // 入力が'/'のとき，かつS1に1つ以上の要素がある時
            int j = S1.top(); S1.pop();  // j(iに対応する'\\'の位置)にS1の最初の要素を代入して，S1の最初の要素を削除する
            sum += i - j;  // sumは総面積
            int a = i - j;  // aは新しくできた水たまりの面積
            while(S2.size() > 0 && S2.top().first > j){  // S2に一つ以上要素があり，対応するjの位置よりもS2に入っているjの位置が大きい時
                a += S2.top().second; S2.pop();  // aにこれまでにできていた水たまりの面積と今できた水たまりの面積を足し，S2の先頭の要素を削除する
            }
            // 対応する'\\'がなくなるまで水たまりの大きさを足してS2のpair(j, a)に入れ続ける
            S2.push(make_pair(j, a));  // S2に新しい('\\'の位置，水たまりの面積)を積む
        }
        // 入力が'/'でもS1の要素が1つも無いときは何も起きない
        // つまり対応する'\\'がないときは面積に関して何も起きない
    }

    vector<int> ans;
    int t = 0;
    while(S2.size() > 0){ans.push_back(S2.top().second); S2.pop();}  // S2に一つ以上の要素がある時，答えにS2の最初のpaの2つ目の要素を入れ，S2の最初の要素を削除する
    reverse(ans.begin(), ans.end());  // ansの要素が最後からになっているので，要素を最初からにする
    cout << sum << endl;
    cout << ans.size();
    for(int i = 0; i < ans.size(); i++){
        cout << " ";
        t += ans[i];
        cout << ans[i];
    }
    cout << endl;

    return 0;
}