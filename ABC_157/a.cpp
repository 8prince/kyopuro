#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
    int n;
    cin >> n;
    int ans = 0;
    if (n%2 == 1) ans = (n+1)/2;
    else ans = n/2;
    cout << ans << endl;
    return 0;
}
