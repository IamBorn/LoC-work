#include <bits/stdc++.h>

using namespace std;

void solve(){

}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int n;
    cin >> n;
    int in;
    int a, b;
    a = -1;
    b = INT_MAX;

    for(int i = 0; i < n; i++){
        cin >> in;
        a = max(a, in);
        b = min(b, in);
    }

    cout << a - b;
	return 0;
}