#include <bits/stdc++.h>

using namespace std;

void solve(){

}

int main(){
	int n;
    cin >> n;
    long long ans = 0;
    for(int i = 1; i <= n; i++){
        ans += i * i;
    }
    cout << ans;
	return 0;
}