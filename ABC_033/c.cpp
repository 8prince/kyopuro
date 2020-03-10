#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
    int N;
    cin >> N;
    vector<pair<string, int>> p(N);
    rep(i, N) cin >> p[i].first >> p[i].second;
    int sum = 0;
    rep(i, N) sum += p[i].second;
    string ans = "atcoder";
    rep(i, N) {
    	if (p[i].second > sum/2) ans = p[i].first;
    }
    cout << ans << endl;
    return 0;
}
