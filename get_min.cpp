#include <bits/stdc++.h>

using namespace std;

int my_min(int a, int b){
    if(a < b){
        return a;
    }
    else{
        return b;
    }
}

int main(){
    int n;
    cin >> n;
    int in;
    int ans = INT_MAX;

    for(int i = 0; i < n; i++){
        cin >> in;
        ans = my_min(ans, in);
    }

    cout << ans;
}