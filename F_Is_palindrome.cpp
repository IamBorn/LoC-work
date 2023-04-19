#include <bits/stdc++.h>

using namespace std;

void solve(){

}

int main(){
	string s;
    cin >> s;
    int len = s.length();
    for(int i = 0; i < len; i++){
        if(s[i] != s[len - i - 1]){
            cout << "NO";
            return 0;
        }
    }

    cout << "YES";
	return 0;
}