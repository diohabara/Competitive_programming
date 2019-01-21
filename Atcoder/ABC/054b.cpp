// #include <iostream>
// using namespace std;


// int main()
// {
// 	cin.tie(0);
// 	ios::sync_with_stdio(false);
//     int n, m;
//     cin >> n >> m;
    
//     const int nmmax = 50;
//     char a[nmmax][nmmax], b[nmmax][nmmax];
//     for (int y = 0; y < n; y++) {
//         for (int x = 0; x < m; x++) {
//             cin >> a[y][x];
//         }
//     }

//     for (int y = 0; y < n; y++) {
//         for (int x = 0; x < m; x++) {
//             cin >> b[y][x];
//         }
//     }

//     bool exist = false;

//     for (int ly = 0; ly < n; ly++) {
//         for (int lx = 0; ly < n; lx++) {
//             if (ly+m-1>=n or lx+m-1>=n) continue;
//             // 画像Aの中にある限りcontinue

//             // フラグを立てる
//             bool match = true;
//             for (int y = 0; y < m; y++) {
//                 for (int x = 0; x < m; x++) {
//                     if(a[ly+y][lx+x] != b[y][x]) match = false;
//                     //もしテンプレート画像と画像の中身が違っていたらfalse
//                 }
//             }
//             if (match) exist = true;
//             // すべて同じだったらtrue
//         }
//     }
//     if (exist)
//         cout << "Yes" << endl;
//     else
//         cout << "No" << endl;
// 	return 0;
// }

#include <iostream>
using namespace std;
int main(void){
    int N,M; cin>>N>>M;
    const int nmmax=50;
    char A[nmmax][nmmax],B[nmmax][nmmax];
    for(int y=0;y<N;++y){
        for(int x=0;x<N;++x){
            cin >> A[y][x];
        }
}
    for(int y=0;y<M;++y){
        for(int x=0;x<M;++x){
            cin >> B[y][x];
        }
}
    bool exist=false;
    for(int ly=0;ly<N;++ly){
        for(int lx=0;lx<N;++lx){
            if(ly+M-1>=N or lx+M-1>=N) continue;
            bool match=true;
            for(int y=0;y<M;++y){
                for(int x=0;x<M;++x){
                    if(A[ly+y][lx+x]!=B[y][x]) match=false;
} }
            if(match) exist=true;
        }
}
    if(exist)
        cout << "Yes" << endl;
else
        cout << "No" << endl;
    return 0;
}
