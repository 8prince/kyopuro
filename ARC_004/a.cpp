#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
    int N;
    cin >> N;
    vector<P> p(N);
    rep(i,N) cin >> p[i].first >> p[i].second;
    double ans = 0.000000;
    rep(i,N)rep(j,N) {
        double dis = sqrt(pow(p[i].first-p[j].first, 2.0)+pow(p[i].second-p[j].second, 2.0));
        ans = max(ans, dis);
    }
    printf("%.6f", ans);
    return 0;
}
