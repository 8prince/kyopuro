#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
    int A, B, M;
    cin >> A >> B >> M;
    vector<int> a(A), b(B);
    rep(i, A) cin >> a[i];
    rep(i, B) cin >> b[i];
    int a_min = *min_element(a.begin(), a.end());
    int b_min = *min_element(b.begin(), b.end());
    int sum = a_min+b_min;
    int tmp;
    rep(i, M) {
        int x, y, c;
        cin >> x >> y >> c;
        tmp = a[x-1]+b[y-1]-c;
        if (tmp < sum) sum = tmp;
    }
    cout << sum << endl;
    return 0;
}
