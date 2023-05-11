#include <bits/stdc++.h>

using namespace std;

void solve(){

}

int main(){
	int n;
    int ans = -1;
    cin >> n;
    int in;
    for(int i = 0; i < n; i++){
        cin >> in;
        ans = max(in, ans);
    }

    cout << ans;
	return 0;
}