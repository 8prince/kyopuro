#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); ++i)
using namespace std;
typedef long long ll;

int main() {
    int H, A;
    cin >> H >> A;
    int ans;
    if (H%A != 0) ans = H/A+1;
    else ans = H/A;
    cout << ans << endl;
    return 0;
}
