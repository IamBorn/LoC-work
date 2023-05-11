#include <bits/stdc++.h>

using namespace std;

void solve(){

}

int main(){
	int n;
    cin >> n;
    int a[1005], in;
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    for(int i = 0; i < n; i++){
        cin >> in;
        cout << in + a[i] << " ";
    }
	return 0;
}