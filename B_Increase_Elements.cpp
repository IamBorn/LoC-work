#include <bits/stdc++.h>

using namespace std;

void solve(){

}

int main(){
	int n;
    cin >> n;

    int a[1005];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    int x;
    cin >> x;
    for(int i = 0; i < n; i++){
        cout << a[i] + x << " ";
    }
}