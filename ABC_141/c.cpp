#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
    int N, K, Q;
    cin >> N >> K >> Q;
    vector<int> A(Q);
    rep(i, Q) cin >> A[i];
    vector<int> score(N);
    rep(i, N) score[i] = K-Q;  // 初期値を工夫するのがこの問題のポイント
    rep(i, Q) ++score[A[i]-1];
    rep(i, N) {
        if (score[i] > 0) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
    return 0;
}
