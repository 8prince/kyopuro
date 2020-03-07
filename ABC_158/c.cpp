#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
    int a, b;
    cin >> a >> b;
    int A, B;
    if (a%2 != 0) A = a*25/2+1;
    else A = a*25/2;
    B = b*10;
    int ans;
    if (A > B) {
        if (A/10 == b) ans = A;
        else ans = -1;
    } else if (A < B) {
        if (B*2/25 == a) ans = B;
        else ans = -1;
    } else ans = A;
    cout << ans << endl;
    return 0;
}
