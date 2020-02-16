#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

const int INF = 1001001001;
const int di[] = {-1, 0, 1, 0};
const int dj[] = {0, -1, 0, 1};

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    if ((a == b && b == c) || (a != b && b != c && c != a)) cout << "No" << endl;
    else cout << "Yes" << endl;
    return 0;
}
