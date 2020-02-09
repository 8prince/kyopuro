#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); ++i)
using namespace std;
typedef long long ll;

int main() {
	string S, T;
	cin >> S >> T;
	int A, B;
	cin >> A >> B;
	string U;
	cin >> U;
	if (U == S) {
		--A;
		cout << A << ' ' << B << endl;
	} else if (U == T) {
		--B;
		cout << A << ' ' << B << endl;
	} else {
		cout << A << ' ' << B << endl;
	}
	return 0;
}
