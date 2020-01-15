#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); ++i)
using namespace std;
typedef long long ll;

int main() {
    string S;
    cin >> S;
    int ans;
    int flag = 1;

    rep(i, S.size())
    	/* アルファベットか数字かを判定 */
    	if((S[i] >= 'a' && S[i] <= 'z') || (S[i] >= 'A' && S[i] <= 'Z')) {
    		flag = 0;
    		printf("error\n");
    		break;
    	}

    if (flag) {
    	ans = atoi(S.c_str());
    	ans = ans * 2;
    	cout << ans << endl;
    }
    return 0;
}
