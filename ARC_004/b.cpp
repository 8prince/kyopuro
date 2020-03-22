#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
    int N;
    cin >> N;
    vector<int> d(N);
    rep(i,N) cin >> d[i];
    cout << fixed << setprecision(10);
    int mx = accumulate(d.begin(), d.end(), 0);  // ここの変数名をmaxにするとバグが起こる
    cout << mx << endl;
    sort(d.begin(), d.end(), greater<int>());  // 降順にソートし直す
    int dis_sum = accumulate(d.begin()+1, d.end(), 0);  // 原点から最も離れた点以外の距離の総和
    cout << max(0, d[0]-dis_sum) << endl;
    return 0;
}
