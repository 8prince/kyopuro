#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
    string S;
    cin >> S;
    rep(i, S.size()) {
        if (S.size()%2 == 1) {
            cout << "No" << endl;
            return 0;
        }
        if (i%2 == 0) {
            if (S[i] == 'h') continue;
            else {
                cout << "No" << endl;
                return 0;
            }
        } else {
            if (S[i] == 'i') continue;
            else {
                cout << "No" << endl;
                return 0;
            }
        }
    }
    cout << "Yes" << endl;
    return 0;
}
