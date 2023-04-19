#include <bits/stdc++.h>

using namespace std;

void solve(){

}

int main(){
	int n;
    cin >> n;
    long long a[50005];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    sort(a, a + n);
    cout << max(a[n-1] * a[n-2], a[0] * a[1]);
	return 0;
}