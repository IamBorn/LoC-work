#include <bits/stdc++.h>

using namespace std;

void solve(){

}

int main(){
	string s;
    cin >> s;
    set<int> ss;
    for(int i = 0; i < s.length(); i++){
        ss.insert(s[i] - '0');
    }

    if(ss.size() == s.length()){
        cout << "YES";
    }
    else{
        cout << "NO";
    }
	return 0;
}