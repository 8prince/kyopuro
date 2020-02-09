#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); ++i)
using namespace std;
typedef long long ll;

int main() {
	string S;
	cin >> S;
	rep(i, S.length()) {
		S.at(i) = 'x';
	}
	cout << S << endl;
	return 0;
}
