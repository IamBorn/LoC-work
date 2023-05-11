#include <bits/stdc++.h>

using namespace std;

void solve(){
    string s;
    cin >> s;

    int len = s.length();
    for(int i = 0; i < len - 1; ){
        if(s[i] == 'A' && s[i+1] == 'B'){
            s.erase(s.begin() + i);
            s.erase(s.begin() + i);
            len -=2;
            if(i > 0){
                i--;
            }
        }
        else if(s[i] == 'B' && s[i+1] == 'B'){
            s.erase(s.begin() + i);
            s.erase(s.begin() + i);
            len -=2;
            if(i > 0){
                i--;
            }
        }
        else{
            i++;
        }
    }

    cout << len << "\n";
}

int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}
	return 0;
}