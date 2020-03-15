#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

const vector<char> v = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j'};

int main() {
    int N;
    cin >> N;
    vector<char> c;
    rep(i,N) c.push_back(v[i]);
    do {
		int ans = 0;
		for (int i = 0; i < 5; ++i) {
			while (ans % 10 != 0) ans += 1;
			ans += A[P[i]];
		}
		final_answer = min(final_answer, ans);
	} while (next_permutation(c.begin(), c.end()));
    return 0;
}
