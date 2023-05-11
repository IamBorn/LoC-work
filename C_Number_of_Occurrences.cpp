#include <bits/stdc++.h>

using namespace std;

void solve(){

}

int main(){
	int n;
    cin >> n;
    int buc[105] = {};
    int in;
    int m = -1;
    for(int i = 0; i < n; i++){
        cin >> in;
        buc[in]++;
        m = max(in, m);
    }

    for(int i = 0; i <= m; i++){
        cout << buc[i] << " ";
    }
	return 0;
}