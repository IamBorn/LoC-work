#include <bits/stdc++.h>

using namespace std;

void solve(){

}

int a[105][205];

int main(){
	int n, m;
    cin >> n >> m;

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m * 2; j++){
            cin >> a[i][j];
        }
    }
    int ans = 0;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            if(a[i][2 * j - 1] || a[i][2 * j]){
                ans++;
            }
        }
    }

    cout << ans;
	return 0;
}