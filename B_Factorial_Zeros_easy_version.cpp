#include <bits/stdc++.h>
#define ll long long

using namespace std;

void solve(){

}

int main(){
	ll n;
    cin >> n;
    ll temp = 5;
    ll ans = 0;

    while(temp <= n){
        ans += n / temp;
        temp *= 5;
    }

    cout << ans;
	return 0;
}