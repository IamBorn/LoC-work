#include <bits/stdc++.h>

using namespace std;

int main(){
    string s, t;
    cin >> s >> t;
    int a = s.length();
    int b = t.length();
    if(a != b){
        cout << "NO";
        return 0;
    }
    
    for(int i = 0; i < a; i++){
        if(s[i] != t[a - i - 1]){
            cout << "NO";
            return 0;
        }
    }

    cout << "YES";
}