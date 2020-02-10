#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); ++i)
using namespace std;
typedef long long ll;

int main() {
    int N, K, M;
    cin >> N >> K >> M;
    vector<int> A(N-1);
    rep(i, N-1) cin >> A[i];
    int sum;
    sum = N*M;
    int tmp;
    tmp = accumulate(A.begin(), A.end(), 0);
    if ((sum-tmp) >= 0 && (sum-tmp) <= K) cout << sum-tmp << endl;
    else if (sum < tmp) cout << 0 << endl;
    else cout << -1 << endl;
    return 0;
}
