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
        if(a[i] % 2 == 0){
            cout << a[i] << " ";
        }
    }
	return 0;
}