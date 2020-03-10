#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

const int INF = 1001001001;

int main() {
	vector<int> v(5);
	rep(i, 5) cin >> v[i];
	int last_order = 0;
	int r, tmp, last_order_num;
	rep(i, 5) {
		if (v[i]%10 != 0) r = v[i]%10;
		else continue;
		tmp = 10-r;
		if (tmp > last_order) {
			last_order = tmp;
			last_order_num = i;
		} else continue;
	}
	int ans = 0;
	rep(i, 5) {
		if (i == last_order_num) continue;
		ans += ((v[i]+(10-1))/10)*10;
	}
	ans += v[last_order_num];
	cout << ans << endl;
	return 0;
}

/*
int main() {
	int a, b, c, d, e;
	cin >> a >> b >> c >> d >> e;
	vector<int> v = {a, b, c, d, e};
	vector<int> p = {0, 1, 2, 3, 4};
	int best_answer = INF;
	do {
		int ans = 0;
		rep(i, v.size()) {
			while (ans%10 != 0) ++ans;
			ans += v[p[i]];
		}
		best_answer = min(best_answer, ans);
	} while (next_permutation(p.begin(), p.end()));
	cout << best_answer << endl;
	return 0;
}
*/
