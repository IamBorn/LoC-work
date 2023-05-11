#include <bits/stdc++.h>

using namespace std;

void solve(){
    string s[105];
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> s[i];
    }
    
    int a, b;
    int sum = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            a = 0;
            b = 0;
            if(s[i][j] == '1'){
                a++;
            }
            else{
                b++;
            }

            if(s[n - i - 1][n - j - 1] == '1'){
                a++;
            }
            else{
                b++;
            }

            if(s[j][n - i - 1] == '1'){
                a++;
            }
            else{
                b++;
            }

            if(s[n - j - 1][i] == '1'){
                a++;
            }
            else{
                b++;
            }

            sum += min(a, b);
        }
    }
    sum /= 4;
    cout << sum << "\n";
}

int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}
	return 0;
}