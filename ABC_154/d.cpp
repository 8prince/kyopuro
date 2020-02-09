#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); ++i)
using namespace std;
typedef long long ll;

int main() {
	int N, K;
	cin >> N >> K;
	vector<int> p(N);
	rep(i, N) cin >> p[i];
	rep(i, N) ++p[i];
	vector<ll> q(N);
	q[0] = p[0];
	rep(i, N-1) {
		q[i+1] = q[i] + p[i+1];
	}
	vector<ll> tmp(N);
	rep(i, N-K+1) {
		if (i == 0) tmp[i] = q[i+K-1];
		else tmp[i] = q[i+K-1] - q[i-1];
	}
	ll max = *max_element(tmp.begin(), tmp.end());
	double ans;
	ans = max/2.0;
	printf("%.12f\n", ans);
	return 0;
}
