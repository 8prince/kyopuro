#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); ++i)
using namespace std;
typedef long long ll;

int main() {
    int N;
    cin >> N;
    vector<int> A(N);
    rep(i, N) cin >> A[i];
    int ans;
    rep(i, N - 1) {
        if (A[i] > A[i + 1]) {
            int ans = A[i] - A[i + 1];
            printf("down %d\n", ans);
        } else if (A[i] < A[i + 1]) {
            int ans = A[i + 1] - A[i];
            printf("up %d\n", ans);
        } else printf("stay\n");
    }
    return 0;
}
