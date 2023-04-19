#include <bits/stdc++.h>

using namespace std;

void solve(){

}

int main(){
	int n;
    int in;
    int ans = 0;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> in;
        if(in == 0){
            ans++;
        }
    }

    cout << ans;
	return 0;
}