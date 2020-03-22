#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
    int N, Y;
    cin >> N >> Y;
    int ans = 0;
    int cst = Y-1000*N;
    rep(x,N+1)rep(y,N+1) {
    	int z = N-x-y;
    	int sum = 9000*x+4000*y;
    	if (sum == cst and 0 <= z) {
    		cout << x << " " << y << " " << z << endl;
    		return 0;
    	}
    }
    cout << -1 << " " << -1 << " " << -1 << endl;
}
