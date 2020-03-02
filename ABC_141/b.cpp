#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
    string S;
    cin >> S;
    rep(i, S.length()) {
    	if (i%2 == 0 && S[i] != 'L') continue;
    	else if (i%2 == 1 && S[i] != 'R') continue;
    	else {
    		cout << "No" << endl;
    		return 0;
    	}
    }
    cout << "Yes" << endl;
    return 0;
}
