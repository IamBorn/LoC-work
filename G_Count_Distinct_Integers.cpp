#include <bits/stdc++.h>

using namespace std;

void solve(){

}

int main(){
	int n;
    cin >> n;
    set<int> s;
    int in;
    for(int i = 0; i < n; i++){
        cin >> in;
        s.insert(in);
    }

    cout << s.size();
	return 0;
}