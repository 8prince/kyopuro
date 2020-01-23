#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); ++i)
using namespace std;
typedef long long ll;

const ll MAX = 1e5;
const ll MOD = 1e9+7;

ll fac[MAX], finv[MAX], inv[MAX];

// テーブルを作る前処理
void COMinit() {
    fac[0] = fac[1] = 1;
    finv[0] = finv[1] = 1;
    inv[1] = 1;
    for (int i = 2; i < MAX; i++){
        fac[i] = fac[i-1]*i%MOD;
        inv[i] = MOD-inv[MOD%i]*(MOD/i)%MOD;  // 逆元であるコイツが必要
        finv[i] = finv[i-1]*inv[i]%MOD;
    }
}

int main() {
	ios::sync_with_stdio(false);
    cin.tie(0);
	cout << setprecision(10) << fixed;
	int N;
	cin >> N;
	COMinit();
	vector<ll> x(N);
	rep(i, N) cin >> x[i];
	// スライムがx(i+1)~x(i)間を通る個数の総数的なもの
	ll c = 0;
	ll ans = 0;
	for(int i = 1; i < N; i++){
        c += inv[i];
        ans += (c*(x[i]-x[i-1]))%MOD;
        ans %= MOD;
    }
    ans *= fac[N-1];
    ans %= MOD;
	cout << ans << endl;
	return 0;
}
