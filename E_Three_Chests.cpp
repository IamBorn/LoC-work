#include <bits/stdc++.h>

using namespace std;

void solve(){

}

int main(){
	int a, b, c;
    cin >> a >> b >> c;
    int sum = a + b + c;
    int temp = min(a, b);
    temp = min(temp, c);
    cout << sum - temp;
	return 0;
}