#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
    int K, S;
    cin >> K >> S;
    int ans = 0;
    rep(x,K+1)rep(y,K+1) {
    	int z = S-x-y;
    	if (0 <= z and z <= K) ++ans;
    }
    cout << ans << endl;
    return 0;
}
