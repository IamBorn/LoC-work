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

    for(int i = 0; i < n-1; i++){
        if(a[i] > 0 && a[i+1] > 0){
            cout << "YES";
            return 0;
        }
        if(a[i] < 0 && a[i+1] < 0){
            cout << "YES";
            return 0;
        }
    }

    cout << "NO";
	return 0;
}