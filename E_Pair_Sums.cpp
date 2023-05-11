#include <bits/stdc++.h>

using namespace std;

void solve(){

}

int main(){
	int n, k;
    cin >> n >> k;
    int a[105];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    int ans = 0;
    for(int i = 0; i < n; i++){
        for(int j = i+1; j < n; j++){
            if(a[i] + a[j] == k){
                ans++;
                //cout << a[i] << " " << a[j] << "\n";
            }
        }
    }
    cout << ans;
	return 0;
}