#include <bits/stdc++.h>

using namespace std;

void solve(){

}

int main(){
	string s;
    cin >> s;
    int len = s.length();

    cout << s[len / 2 - 1] << s[len / 2] << s[len / 2 + 1];
	return 0;
}