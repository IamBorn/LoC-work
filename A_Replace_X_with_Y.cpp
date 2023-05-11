#include <bits/stdc++.h>

using namespace std;

void solve(){

}

int main(){
	int n;
    cin >> n;
    vector<int> v;
    v.resize(n);
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }
    int x, y;
    cin >> x >> y;
    for(int i = 0; i < n; i++){
        if(v[i] == x){
            v[i] = y;
        }
    }

    for(auto i : v){
        cout << i << " ";
    }
	return 0;
}