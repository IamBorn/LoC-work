#include <bits/stdc++.h>

using namespace std;

int main(){
    string s;
    cin >> s;
    int len = s.length();
    for(int i = len - 1; i >= 0; i--){
        cout << s[i];
    }
}