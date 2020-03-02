#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
    int N, M;
    cin >> N >> M;
    priority_queue<int> q;
    rep(i, N) {
        int a;
        cin >> a;
        q.push(a);
    }
    rep(i, M) {
        int a = q.top(); q.pop();
        q.push(a/2);
    }
    ll ans = 0;
    rep(i, N) {
        ans += q.top(); q.pop();
    }
    cout << ans << endl;
    return 0;
}
