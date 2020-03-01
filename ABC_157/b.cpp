#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
    vector<vector<int>> a(3, vector<int>(3));
    rep(i, 3)rep(j, 3) {
        cin >> a[i][j];
    }
    int n;
    cin >> n;
    vector<int> b(n);
    rep(i, n) cin >> b[i];
    vector<vector<bool>> appear(3, vector<bool>(3));
    rep(i, 3)rep(j, 3) {
        appear[i][j] = false;
        rep(k, n) {
            if (a[i][j] == b[k]) appear[i][j] = true;
        }
    }
    string ans = "No";
    rep(i, 3) {
        if (appear[i][0] && appear[i][1] && appear[i][2]) ans = "Yes";
    }
    rep(i, 3) {
        if (appear[0][i] && appear[1][i] && appear[2][i]) ans = "Yes";
    }
    if(appear[0][0] and appear[1][1] and appear[2][2]) ans = "Yes";
    if(appear[0][2] and appear[1][1] and appear[2][0]) ans = "Yes";
    cout << ans << endl;
    return 0;
}
