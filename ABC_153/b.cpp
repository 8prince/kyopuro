#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); ++i)
using namespace std;
typedef long long ll;

int main() {
    int H, N;
    cin >> H >> N;
    vector<int> A(N);
    rep(i, N) cin >> A[i];
    int sum = 0;
    rep(i, N) sum += A[i];
    if (H <= sum) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}
