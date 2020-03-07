#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
    ll n, a, b;
    cin >> n >> a >> b;
    ll c = a+b;
    ll p_count = n/c;
    ll r = 0;
    r = n%c;
    ll sum;
    if (a != 0) {
    	if (r > a) r = a;
    	sum = a*p_count+r;
    } else sum = 0;
    cout << sum << endl;
    return 0;
}
