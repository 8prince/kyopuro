#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); ++i)
using namespace std;
typedef long long ll;

int main() {
    int N;
    N = 6;
    vector<int> A(N);
    rep(i, N) cin >> A[i];
    int ans;
    sort(A.begin(), A.end(), greater<int>());
    ans = A[2];
    cout << ans << endl;
}
