#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

const int INF = 1001001001;
const int di[] = {-1, 0, 1, 0};
const int dj[] = {0, -1, 0, 1};

int main() {
    int n;
    cin >> n;
    map<string, int> m;
    rep(i,n){
        string s;
        cin >> s;
        ++m[s];
    }
    int max = 0;
    for(auto x:m) {
        if (x.second > max) max = x.second;
    }
    for(auto x:m) {
        if(x.second == max)
            cout << x.first << endl;
    }
    return 0;
}
