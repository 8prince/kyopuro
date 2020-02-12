#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
    int N, M;
    cin >> N >> M;
    vector<int> ac(N), wa(N);
    rep(i, M) {
        int p;
        string S;
        cin >> p >> S;
        --p;
        if (ac[p]) continue;
        if (S == "AC") ac[p] = 1;
        else ++wa[p];
    }
    int AC = 0, WA = 0;
    rep(i, N) {
        AC += ac[i];
        if (ac[i]) WA += wa[i];
    }
    printf("%d %d\n", AC, WA);
    return 0;
}
