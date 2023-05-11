#include <bits/stdc++.h>

using namespace std;

void solve(){

}

int main(){
	int n;
    cin >> n;
    vector<int> v;
    v.resize(n);
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }
    int x;
    int ans = 0;
    cin >> x;
    for(auto i : v){
        if(i == x){
            ans++;
        }
    }

    cout << ans;
	return 0;
}