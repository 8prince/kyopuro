#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
	int x, y, z, K;
	cin >> x >> y >> z >> K;
	vector<ll> a(x), b(y), c(z);
	rep(i, x) cin >> a[i]; sort(a.begin(), a.end(), greater<ll>());
	rep(i, y) cin >> b[i]; sort(b.begin(), b.end(), greater<ll>());
	rep(i, z) cin >> c[i]; sort(c.begin(), c.end(), greater<ll>());
	vector<ll> abc;
	rep(i, x)rep(j, y)rep(k, z) {
		if ((i+1)*(j+1)*(k+1) <= K) abc.push_back(a[i]+b[j]+c[k]);
		else break;
	}
	sort(abc.begin(), abc.end(), greater<ll>());
	rep(i, K) cout << abc[i] << endl;
	return 0;
}


/*
int main() {
	int x, y, z, k;
	cin >> x >> y >> z >> k;
	vector<ll> a(x), b(y), c(z);
	rep(i, x) cin >> a[i];
	rep(i, y) cin >> b[i];
	rep(i, z) cin >> c[i];
	vector<ll> ab;
	rep(i, x)rep(j, y) ab.push_back(a[i]+b[j]);
	sort(ab.begin(), ab.end(), greater<ll>());
	//rep(i, ab.size()) cout << ab[i] << endl;
	vector<ll> abc;
	if (k < ab.size()) {
		rep(i, k)rep(j, z) abc.push_back(ab[i]+c[j]);
	} else {
		rep(i, ab.size())rep(j, z) abc.push_back(ab[i]+c[j]);
	}
	sort(abc.begin(), abc.end(), greater<ll>());
	//rep(i, abc.size()) cout << abc[i] << endl;
	rep(i, k) cout << abc[i] << endl;
	return 0;
}
*/