#include<bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); ++i)
using namespace std;
typedef long long ll;

int main() {
    int N, Q;
    cin >> N >> Q;
    // 2 次元配列の vector は括弧と括弧の間にスペース推奨らしい
    vector<vector<bool> > connect(N, vector<bool> (N, false));
    while (Q--) {
        int flag;
        cin >> flag;
        if (flag == 1) {
            int a, b;
            cin >> a >> b;
            --a;  // 配列の index に合わせるためデクリメント
            --b;  // 配列の index に合わせるためデクリメント
            connect[a][b] = true;
        } else if (flag == 2) {
            int a;
            cin >> a;
            --a;
            for (int i = 0; i < N; ++i) {
                if (connect[i][a]) {
                    connect[a][i] = true;
                }
            }
        } else {
            int a;
            cin >> a;
            --a;
            vector<bool> flag(N, false);
            for (int i = 0; i < N; ++i) {
                if (connect[a][i]) {
                    for (int j = 0; j < N; ++j) {
                        if (connect[i][j]) {
                            flag[j] = true;
                        }
                    }
                }
            }
            for (int i = 0; i < N; ++i) {
                if (flag[i]) connect[a][i] = true;
            }
        }
    }
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            if (i == j) cout << "N";
            else {
                cout << (connect[i][j] ? "Y" : "N");
            }
        }
        cout << endl;
    }
    return 0;
}
