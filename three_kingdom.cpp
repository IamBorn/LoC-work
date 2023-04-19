#include <bits/stdc++.h>
#define pii pair<int, int>

using namespace std;

void solve(){
    int r, c;
    string s[52];
    cin >> r >> c;
    for(int i = 0; i < r; i++){
        cin >> s[i];
    }

    stack<pii> temp, g[4];
    int cnt = 0;

    int ii[4] = {1, 0, -1, 0};
    int jj[4] = {0, 1, 0, -1};
    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            if(s[i][j] == 'X'){
                temp.push({i, j});
                while(!temp.empty()){
                    pii now = temp.top();
                    s[now.first][now.second] = 'a' + cnt;
                    temp.pop();
                    for(int k = 0; k < 4; k++){
                        int ni = now.first + ii[k];
                        int nj = now.second + jj[k];

                        if(ni < r && ni >= 0 && nj < c && nj >= 0 && s[ni][nj] == 'X'){
                            s[ni][nj] = 'a' + cnt;
                            temp.push({ni, nj});
                            g[cnt].push({ni, nj});
                        }
                    }
                }
                cnt++;
            }
        }
    }

    int ans[3][3] = {};
    for(int i = 0; i < 3; i++){
        while(!g[i].empty()){
            pii now = g[i].top();
            g[i].pop();

            for(int k = 0; k < 4; k++){
                int ni = now.first + ii[k];
                int nj = now.second + jj[k];

                if(ni < r && ni >= 0 && nj < c && nj >= 0 && s[ni][nj] != 'a' + i){
                    if(s[ni][nj] != '.'){
                        
                    }
                    s[ni][nj] = 'a' + i;
                    g[cnt].push({ni, nj});
                }
            }
        }
    }
}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}