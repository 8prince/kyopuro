#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
    int n, m;
    cin >> n >> m;
    vector<P> p(m);
    rep(i, m) cin >> p[i].first >> p[i].second;
    rep(x, 1000) {
    	int digit = 1;
    	int nx = x/10;
    	vector<int> rev(1, x%10);
    	while (nx) {
    		++digit;
    		rev.push_back(nx%10);
    		nx /= 10;
    	}
    	if (digit != n) continue;
    	bool flag = true;
    	reverse(rev.begin(), rev.end());
    	rep(i, m) {
    		if (rev[p[i].first-1] != p[i].second) flag = false;
    	}
    	if (flag) {
    		cout << x << endl;
    		return 0;
    	}
    }
    cout << -1 << endl;
    return 0;
}
