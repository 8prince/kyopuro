#include<bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); ++i)
using namespace std;
typedef long long ll;

int main() {
    int N;
    cin >> N;
    vector<int> A(N+1);
    rep(i, N) {
        int p;
        cin >> p;
        ++A[p];
    }
    int x = 0, y = 0;
    for(int i = 1; i <= N; ++i) {
        if(A[i] == 0) x = i;
        else if(A[i] == 2) y = i;
    }
    if (x+y) cout << y << " " << x << endl;
    else cout << "Correct" << endl;
    return 0;
}
