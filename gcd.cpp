#include <bits/stdc++.h>

using namespace std;

int gcd(int a, int b){
    if(a == 0){
        return b;
    }
    if(b == 0){
        return a;
    }

    int temp = max(a, b) % min(a, b);

    if(temp == 0){
        return min(a, b);
    }

    return gcd(temp, min(a, b));
}

int main(){
    int a, b;
    cin >> a >> b;

    cout << gcd(a, b);
}