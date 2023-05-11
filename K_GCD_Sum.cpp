#include <bits/stdc++.h>
#define ll long long

using namespace std;

void solve(){
    ll now;
    cin >> now;
    string temp;
    while(true){
        ll a = now;
        ll b = 0;

        temp = to_string(now);
        int len = temp.length();
        for(int i = 0; i < len; i++){
            b += temp[i] - '0';
        }

        if(__gcd(a, b) > 1){
            cout << now << "\n";
            return;
        }

        now++;
    }
    

}

int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}
	return 0;
}