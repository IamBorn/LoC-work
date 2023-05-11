#include <bits/stdc++.h>

using namespace std;

void solve(){

}

int main(){
	string s;
    cin >> s;
    int len = s.length();
    for(int i = 1; i <= len; i++){
        if(len % i != 0){
            continue;
        }
        bool ans = false;
        for(int j = 0; j+i < len; j++){
            if(s[j] != s[i+j]){
                ans = true;
                break;
            }
        }

        if(!ans){
            for(int j = 0; j < i; j++){
                cout << s[j];
            }
            break;
        }
    }
	return 0;
}