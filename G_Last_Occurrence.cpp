#include <bits/stdc++.h>

using namespace std;

void solve(){

}

int main(){
	string s;
    cin >> s;
    int len = s.length();

    char c;
    cin >> c;
    int ans;
    for(int i = 0; i < len; i++){
        if(s[i] == c){
            ans = i;
        }
    }

    cout << ans;
	return 0;
}