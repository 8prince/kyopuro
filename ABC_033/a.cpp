#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int MOD = 1111;

int main() {
    int N;
    cin >> N;
    if (N%MOD == 0) cout << "SAME" << endl;
    else cout << "DIFFERENT" << endl;
    return 0;
}
