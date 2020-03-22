#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
    int L;
    cin >> L;
    cout << fixed << setprecision(12);
    double x, y, z;
    //if (L%3 == 0) x = y = z = L/3;
    //else if (L%3 == 1) {
    //	x = z = L/3;
    //	y = (L+2)/3;
    //} else {
    //	x = z = (L+1)/3;
    //	y = L/3;
    //}
    x = y = z = L/(double)3;
    double ans;
    ans = x*y*z;
    cout << ans << endl;
    return 0;
}
