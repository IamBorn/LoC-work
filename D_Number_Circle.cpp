#include <bits/stdc++.h>
#define ll long long

using namespace std;

void solve(){

}

int main(){
	int n;
    vector<ll> v;
    ll in;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> in;
        v.push_back(in);
    }

    sort(v.begin(), v.end());

    if(v[n-1] >= v[n-3] + v[n-2]){
        cout << "NO";
    }
    else{
        cout << "YES\n";
        for(int i = 0; i < n-3; i++){
            cout << v[i] << " ";
        }

        cout << v[n-3] << " " << v[n-1] << " " << v[n-2];
    }
	return 0;
}