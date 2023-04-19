#include <bits/stdc++.h>

using namespace std;

void solve(){

}

int main(){
	string s;
    cin >> s;
    int len = s.length();

    cout << s[0];
    for(int i = 1; i < len; i++){
        cout << "_" << s[i];
    }
	return 0;
}