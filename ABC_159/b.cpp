#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
    string S;
    cin >> S;
    int N = S.length();
    for (int i = 0; i < N; ++i) {
    	if (S[i] != S[N-(i+1)]) {
    		cout << "No" << endl;
    		return 0;
    	}
    }
    for (int i = 0; i < (N-1)/2; ++i) {
    	if (S[i] != S[(N-1)/2-(i+1)]) {
    		cout << "No" << endl;
    		return 0;
    	}
    }
    int j = 0;
    for (int i = (N+3)/2-1; i < N; ++i) {
    	if (S[i] != S[N-(j+1)]) {
    		cout << "No" << endl;
    		return 0;
    	}
    	++j;
    }
    cout << "Yes" << endl;
    return 0;
}
