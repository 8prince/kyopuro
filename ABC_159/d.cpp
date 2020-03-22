#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
    ll N;
    cin >> N;
    vector<ll> A(N);
    rep(i,N) cin >> A[i];
    vector<ll> p(N+1);
    rep(i,N+1) p[A[i]]++;
    ll ans = 0;
    rep(i,N+1) {
        if (p[i] > 1) ans += p[i]*(p[i]-1)/2;
    }
    rep(i,N) {
        if (p[A[i]] > 1) cout << ans-(p[A[i]]*(p[A[i]]-1)/2-(p[A[i]]-1)*(p[A[i]]-2)/2) << endl;
        else cout << ans << endl;
    }
    return 0;
}
