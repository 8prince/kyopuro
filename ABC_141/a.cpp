#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
    string S;
    cin >> S;
    if (S == "Sunny") cout << "Cloudy" << endl;
    else if (S == "Cloudy") cout << "Rainy" << endl;
    else cout << "Sunny" << endl;
    return 0;
}
