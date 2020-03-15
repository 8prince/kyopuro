#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
    int H, W;
    cin >> H >> W;
    int odd_flag;
    if (W%2 == 0) odd_flag = 0;
    else odd_flag = 1;
    ll ans = 0;
    rep(i,H) {
    	if (H == 1 or W == 1) {
    		ans = 1;
    		break;
    	}
    	if (i%2 == 0 && odd_flag == 0) ans += W/2;
    	else if (i%2 == 0 && odd_flag == 1) ans += (W+1)/2;
    	else if (i%2 == 1) ans += W/2;
    }
    cout << ans << endl;
    return 0;
}
