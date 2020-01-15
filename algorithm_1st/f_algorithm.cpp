#include<bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); ++i)
using namespace std;
typedef long long ll;

int main() {
    string S;
    cin >> S;
    vector<string> word;
    string tmp;
    bool flag = false;
    for (int i = 0; i < S.length(); ++i) {
        if (S[i] >= 'A' && S[i] <= 'Z') {
            if (flag) {
                tmp += S[i]-'A'+'a';  // 小文字に揃える
                word.push_back(tmp);
                flag = false;
            } else {
                tmp = S[i]-'A'+'a';  // 小文字に揃える
                flag = true;
            }
        } else tmp += S[i];  // 小文字はそのまま
    }
    sort(word.begin(), word.end());
    for (int i = 0; i < word.size(); ++i){
        for (int j = 0; j < word[i].length(); ++j){
            // 単語区切れの始めと終わりを大文字に戻す
            if (j == 0 || j == word[i].length()-1){
                cout << (char)(word[i][j]+'A'-'a');
            } else cout << word[i][j];
        }
    }
    return 0;
}
