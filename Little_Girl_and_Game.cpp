#include <bits/stdc++.h>

using namespace std;

int main(){
    string s;
    cin >> s;
    int a[30] = {};
    int len = s.length();
    for(int i = 0; i < len; i++){
        a[s[i] - 'a']++;
    }

    int odd = 0;
    for(int i = 0; i < 26; i++){
        if(a[i] % 2){
            odd++;
        }
    }
    if(odd == 1 || odd == 0){
        cout << "First";
        return 0;
    }
    

    if(odd % 2){
        cout << "First";
    }
    else{
        cout << "Second";
    }
}