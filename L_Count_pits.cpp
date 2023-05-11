#include <bits/stdc++.h>

using namespace std;

void solve(){

}

int main(){
	int n;
    cin >> n;
    vector<int> v;
    int in;
    for(int i = 0; i < n; i++){
        cin >> in;
        v.push_back(in);
    }
    int ans = 0;
    for(int i = 1; i < n-1; i++){
        if(v[i] < v[i-1] && v[i] < v[i+1]){
            ans++;
        }
    }

    cout << ans;
	return 0;
}