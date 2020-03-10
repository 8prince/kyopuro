#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
	ll n, a, b, c, d, e;
	cin >> n >> a >> b >> c >> d >> e;
	cout << max({(n+(a-1))/a, (n+(b-1))/b, (n+(c-1))/c, (n+(d-1))/d, (n+(e-1))/e})+4 << endl;
	// cout << max({(n-1)/a, (n-1)/b, (n-1)/c, (n-1)/d, (n-1)/e})+5 << endl;
	return 0;
}
