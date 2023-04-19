#include <bits/stdc++.h>

using namespace std;

int a[100005];

void solve(){

}

int main(){
	int n;
    
    cin >> n;

    int maxx = INT_MIN, minn = INT_MAX;
    for(int i = 1; i <= n; i++){
        cin >> a[i];
        maxx = max(maxx, a[i]);
        minn = min(minn, a[i]);
    }

    int s;
    cin >> s;
    cout << (maxx - minn) + min(a[s] - minn, maxx - a[s]);
	return 0;
}