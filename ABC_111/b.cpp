#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int m = 111;

int main() {
    int n;
    cin >> n;
    int ans;
    if (n%m == 0) ans = n;
    else ans = n/m*m+m;
    cout << ans << endl;
    return 0;
}
