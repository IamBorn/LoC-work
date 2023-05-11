#include <iostream>

using namespace std;

void solve(){
    int n, m;
    int a[205][205];
    cin >> n >> m;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> a[i][j];
        }
    }
    int ans = -1;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            int sum = 0;
            for(int k = 1; i + k < n && j + k < m; k++){
                sum += a[i+k][j+k];
            }

            for(int k = 1; i - k >= 0 && j + k < m; k++){
                sum += a[i-k][j+k];
            }

            for(int k = 1; i + k < n && j - k >= 0; k++){
                sum += a[i+k][j-k];
            }

            for(int k = 1; i - k >= 0 && j - k >= 0; k++){
                sum += a[i-k][j-k];
            }

            sum += a[i][j];
            ans = max(ans, sum);
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
