#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n;
    cin >> n;
    int in, m = INT_MAX, sum = 0;

    for(int i = 0; i < n; i++){
        cin >> in;
        m = min(m, in);
        sum += in;
    }

    cout << sum - (m * n) << "\n";
}

int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}
	return 0;
}