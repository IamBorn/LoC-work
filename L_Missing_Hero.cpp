#include <bits/stdc++.h>

using namespace std;

void solve(){

}

int main(){
	int n;
    int sum = 0;
    int in;
    cin >> n;
    for(int i = 0; i < n-1; i++){
        cin >> in;
        sum += in;
    }

    cout << (n * (n+1) / 2) - sum;
	return 0;
}