#include <bits/stdc++.h>

#define  ll long long

using namespace std;

void solve(){

}

int main(){
	int n, k;
    vector<ll> v;
    ll in;
    cin >> n >> k;
    for(int i = 0; i < n; i++){
        cin >> in;
        v.push_back(in);
    }

    sort(v.begin(), v.end());

    if(k == 0){
        if(v[0] > 1){
            cout << "1";
        }
        else{
            cout << "-1";
        }

        return 0;
    }

    if(v[k-1] == v[k]){
        cout << "-1";
    }
    else{
        cout << v[k-1];
    }
}