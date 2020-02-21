#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
    ll w, h, x, y;
    cin >> w >> h >> x >> y;
    double area;
    area = (double)w*h/2;
    printf("%.6f ", area);
    int flag = 0;
    if (w%2 == 0 && h%2 == 0) {
        if (x == w/2 && y == h/2) flag = 1;
    }
    cout << flag << endl;
    return 0;
}
