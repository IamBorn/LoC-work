#include <bits/stdc++.h>

using namespace std;

void solve(){

}

int main(){
	string s;
    cin >> s;
    int len = s.length();
    int a = 0, b = 0;
    for(int i = 0; i < len; i++){
        if(s[i] == 'a'){
            a++;
        }
        else{
            b++;
        }
    }

    if(len % 2){
        if(a % 2 == 0 && b % 2 != 0){
            cout << "YES";
        }
        else if(a % 2 != 0 && b % 2 == 0){
            cout << "YES";
        }
        else{
            cout << "NO";
        }
    }
    else{
        if(a % 2 == 0 && b % 2 == 0){
            cout << "YES";
        }
        else{
            cout << "NO";
        }
    }
	return 0;
}