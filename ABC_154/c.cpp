#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); ++i)
using namespace std;
typedef long long ll;

int main() {
	int N;
	cin >> N;
	vector<int> A(N);
	rep(i, N) cin >> A[i];
	sort(A.begin(), A.end());
	string ans;
	rep(i, N-1) {
		if (A[i] == A[i+1]) {
			ans = "NO";
			break;
		} else ans = "YES";
	}
	cout << ans << endl;
	return 0;
}
