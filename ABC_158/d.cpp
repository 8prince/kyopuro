#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
    string s;
    cin >> s;
    int q;
    cin >> q;
    string t;
    rep(i, q) {
        int flag;
        cin >> flag;
        if (flag == 1) {
            swap(s, t);
        } else {
            int flag_sub; char c;
            cin >> flag_sub >> c;
            if (flag_sub == 1) {
                t += c;
            } else {
                s += c;
            }
        }
    }
    reverse(t.begin(), t.end());
    t += s;
    cout << t << endl;
    return 0;
}
