#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); ++i)
using namespace std;
typedef long long ll;

int main() {
    int N, K;
    cin >> N >> K;
    vector<int> H(N);
    rep(i, N) cin >> H[i];
    sort(H.begin(), H.end(), greater<int>());
    ll ans = 0;
    rep(i, N) {
    	if (K == 0) ans += H[i];
    	else if (K > 0) --K;
    	else return 0;
    }
    cout << ans << endl;
    return 0;
}
