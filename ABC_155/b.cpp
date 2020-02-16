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
    vector<string> a(n);
    rep(i,n) cin >> a[i];
    int flag = 1;
    rep(i,n){
    	if (a[i]%2 == 0) {
    		if ((a[i]%3 == 0) || (a[i]%5 == 0)) flag = 1;
    		else {
    			flag = 0;
    			break;
    		}
    	}
    }
    if (flag == 1) cout << "APPROVED" << endl;
    else cout << "DENIED" << endl;
    return 0;
}
