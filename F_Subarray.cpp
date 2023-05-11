#include <bits/stdc++.h>

using namespace std;

void solve(){

}

int main(){
	int n, m;
    cin >> n >> m;
    int a[105], b[105];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    for(int i = 0; i < m; i++){
        cin >> b[i];
    }
    bool f;
    for(int i = 0; i <= m - n; i++){
        f = true;
        for(int j = 0; j < n; j++){
            if(a[j] != b[i+j]){
                f = false;
                break;
            }
        }
        if(f){
            cout << "Yes";
            return 0;
        }
    }
    cout << "No";
	return 0;
}