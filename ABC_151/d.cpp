#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

const int INF = 1001001001;
const int di[] = {-1, 0, 1, 0};
const int dj[] = {0, -1, 0, 1};

int main() {
    int H, W;
    cin >> H >> W;
    vector<string> S(H);
    rep(i, H) cin >> S[i];
    int ans = 0;
    rep(Si, H)rep(Sj, W) {
        if (S[Si][Sj] == '#') continue;
        vector<vector<int>> dist(H, vector<int>(W, INF));
        queue<P> q;
        auto update = [&](int i, int j, int x) {
            if (dist[i][j] != INF) return;
            dist[i][j] = x;
            q.push(P(i, j));  // .emplace(i, j)
        };
        update(Si, Sj, 0);
        while (!q.empty()) {
            int i = q.front().first;
            int j = q.front().second; q.pop();
            rep(dir, 4) {
                int ni = i+di[dir], nj = j+dj[dir];
                if (ni < 0 || ni >= H || nj < 0 || nj >= W) continue;
                if (S[ni][nj] == '#') continue;
                update(ni, nj, dist[i][j]+1);
            }
        }
        rep(i, H)rep(j, W) {
            if (dist[i][j] == INF) continue;
            ans = max(ans, dist[i][j]);
        }
    }
    cout << ans << endl;
    return 0;
}
