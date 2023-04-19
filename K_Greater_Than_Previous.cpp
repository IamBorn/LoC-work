#include <bits/stdc++.h>

using namespace std;

void solve(){

}

int main(){
	int n;
    int a[1005];
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    int ans = 0;
    for(int i = 1; i < n; i++){
        if(a[i] > a[i-1]){
            ans++;
        }
    }

    cout << ans;
	return 0;
}