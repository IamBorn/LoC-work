#include <bits/stdc++.h>

using namespace std;

void solve(){

}

int main(){
	string s;
    cin >> s;
    int len = s.length();
    int ans = 0;
    for(int i = 0; i < len; i++){
        if(s[i] == 'f'){
            ans++;
        }
    }

    cout << ans;
	return 0;
}