#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); ++i)
using namespace std;
typedef long long ll;

int main() {
    ll H;
    cin >> H;
    ll ans = 0;
    ll tmp = 1;
    while (H) {
    	H /= 2;
    	ans += tmp;
    	tmp *= 2;
    }
    cout << ans << endl;
    return 0;
}
