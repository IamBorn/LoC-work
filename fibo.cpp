#include <bits/stdc++.h>

using namespace std;

int fibo(int i){
    if(i == 1){
        return 1;
    }
    if(i == 0){
        return 0;
    }

    return fibo(i - 1) + fibo(i - 2);
}

int main(){
    int n;
    cin >> n;
    cout << fibo(n);
}