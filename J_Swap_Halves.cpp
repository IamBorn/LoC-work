#include <bits/stdc++.h>

using namespace std;

void solve(){

}

int main(){
	string s;
    cin >> s;
    int len = s.length();
    for(int i = len / 2; i < len; i++){
        cout << s[i];
    }
    for(int i = 0; i < len / 2; i++){
        cout << s[i];
    }
	return 0;
}