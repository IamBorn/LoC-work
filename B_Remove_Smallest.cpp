#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n;
    vector<int> v;
    int in;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> in;
        v.push_back(in);
    }

    sort(v.begin(), v.end());
    for(int i = 0; i < n - 1; i++){
        if(abs(v[i] - v[i+1]) > 1){
            cout << "NO\n";
            return;
        }
    }

    cout << "YES\n";
}

int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}
	return 0;
}