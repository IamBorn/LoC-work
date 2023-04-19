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
        if(s[i] == 'A'){
            a++;
        }
        else{
            b++;
        }
    }
    if(a > b){
        cout << "ALICE";
    }
    else if(b > a){
        cout << "BOB";
    }
    else{
        cout << "DRAW";
    }
	return 0;
}