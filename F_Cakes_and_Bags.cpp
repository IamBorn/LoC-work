#include <bits/stdc++.h>

using namespace std;

void solve(){

}

int main(){
	int a, b, c, d;
    cin >> a >> b >> c >> d;

    if(a <= c && b <= d){
        cout << "YES";
    }
    else if(a <= d && b <= c){
        cout << "YES";
    }
    else{
        cout << "NO";
    }
	return 0;
}