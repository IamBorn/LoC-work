#include <bits/stdc++.h>

using namespace std;

void solve(){

}

int main(){
	string s;
    cin >> s;
    int len = s.length();
    vector<int> v;
    for(int i = 0; i < len; i++){
        if(s[i] != '+'){
            v.push_back(s[i] - '0');
        }
    }

    sort(v.begin(), v.end());
    cout << v[0];
    for(int i = 1; i < v.size(); i++){
        cout << "+" << v[i];
    }
}