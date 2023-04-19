#include <bits/stdc++.h>

using namespace std;

void solve(){
    string s;
    cin >> s;
    int cnt[30] = {};
    int len = s.length();
    for(int i = 0; i < len; i++){
        cnt[s[i] - 'A']++;
    }
    int ans = -1;
    for(int i = 0; i < 26; i++){
        ans = max(ans, cnt[i]);
    }
    cout << len - ans << "\n";
}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}