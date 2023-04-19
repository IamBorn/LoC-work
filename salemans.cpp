#include <bits/stdc++.h>

using namespace std;

const int lim = 1e9 + 7;

vector<int> adj[102];
int n, m, k;

int dp[102][102][1002];

int main(){
    
    cin >> n >> m >> k;

    int u, v;
    for(int i = 0; i < m; i++){
        cin >> u >> v;
        adj[u].push_back(v);
        dp[u][v][1] = 1;
    }

    for(int i = 2; i <= k; i++){
        for(int j = 1; j <= n; j++){
            dp[j][j][i] += dp[j][j][i-1];
            for(auto k : adj[j]){
                dp[j][k][i] += ;
            }
        }
    }

    int q;
    cin >> q;
    int d, t;

    while(q--){
        cin >> d >> t;
        cout << dp[1][t][d] << "\n";
    }
}