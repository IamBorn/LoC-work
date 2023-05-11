#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    float sum = 0;
    for(float i = 1; i <= n; i++){
        sum += 1 / i * 1.0;
    }

    cout << sum;
}