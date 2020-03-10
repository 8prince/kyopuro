#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
	int a, b, c, d, e, k;
	cin >> a >> b >> c >> d >> e >> k;
	int l = e-a;
	string ans;
	if (l <= k) ans = "Yay!";
	else ans = ":(";
	cout << ans << endl;
	return 0;
}


/*
int main() {
    vector<int> p(5);
    rep(i, 5) cin >> p[i];
    int k;
    cin >> k;
    for (int i = 0; i < 4; ++i) {
    	for (int j = i+1; j < 5; ++j) {
    		if (p[j]-p[i] > k) {
    			cout << ":(" << endl;
    			return 0;
    		}
    	}
    }
    cout << "Yay!" << endl;
    return 0;
}
*/