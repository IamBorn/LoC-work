#include <bits/stdc++.h>

using namespace std;

void solve(){

}

int main(){
	int n, m, k;
    cin >> k >> n >> m;
    int in;
    set<int> s;
    for(int i =0; i < n; i++){
        cin >> in;
        s.insert(in);
    }
    for(int i = 0; i < m; i++){
        cin >> in;
        s.insert(in);
    }

    if(s.size() == k){
        cout << "YES";
    }
    else{
        cout << "NO";
    }
	return 0;
}