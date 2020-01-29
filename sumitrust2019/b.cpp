#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); ++i)
using namespace std;
typedef long long ll;

int main() {
	int N;
	cin >> N;
	int X;
	X = N*25/27;
	int ans1, ans2, ans3;
	ans1 = (X-1)*27/25;
	ans2 = X*27/25;
	ans3 = (X+1)*27/25;
	if (N == ans1) cout << X-1 <<endl;
	else if (N == ans2) cout << X <<endl;
	else if (N == ans3) cout << X+1 << endl;
	else cout << ":(" << endl;
	return 0;
}
