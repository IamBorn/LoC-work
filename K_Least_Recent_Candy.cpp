#include <bits/stdc++.h>

using namespace std;

void solve(){

}

int pos[100005];

int main(){
	int n;
    cin >> n;
    int in;
    for(int i = 1; i <= n; i++){
        cin >> in;
        pos[in] = i;
    }

    int ans = INT_MAX;
    int idx;

    for(int i = 1; i <= 100000; i++){
        if(pos[i] != 0){
            if(ans > pos[i]){
                ans = pos[i];
                idx = i;
            }
        }
    }

    cout << idx;

	return 0;
}