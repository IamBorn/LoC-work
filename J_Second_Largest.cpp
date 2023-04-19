#include <bits/stdc++.h>

using namespace std;

void solve(){

}

int main(){
	int n;
    int a[1005];
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    sort(a, a + n);
    cout << a[n-2];
	return 0;
}