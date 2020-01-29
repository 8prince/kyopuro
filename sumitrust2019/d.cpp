#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); ++i)
using namespace std;
typedef long long ll;

int main() {
	int N;
	string S;
	cin >> N >> S;
	int ans = 0;
	rep(i, 1000) {
		stringstream ss;
	    ss << setw(3) << setfill('0') << i;
	    string str = ss.str();
	    int k = 0;
	    rep(j, N) {
	    	if (S[j] == str[k]) {
	    		++k;
	    		if (k == 3) break;
	    	}
	    }
	    if (k == 3) ++ans;
	}
	cout << ans << endl;
	return 0;
}
