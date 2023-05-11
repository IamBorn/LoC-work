#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n;
    cin >> n;
    vector<int> v;
    v.resize(n+2);
    for(int i = 1; i <= n; i++){
        cin >> v[i];
    }
    int ans = 0;
    for(int i = 1; i <= n; i++){
        for(int j = i + 1; j <= n; j++){
            if(v[i] >= v[j]){
                ans++;
            }
        }
    }

    cout << ans << "\n";
}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}