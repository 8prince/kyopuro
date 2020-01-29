#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); ++i)
using namespace std;
typedef long long ll;

int main() {
	int X;
	cin >> X;
	int num, frac;
	num = X/100;  // 購入する個数の総数
	frac = X%100;  // 端数(下2桁)
	if (num != 0 && (frac/num < 5 || (frac/num == 5 && frac%num == 0))) cout << 1 << endl;
	else cout << 0 << endl;
	return 0;
}
