#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;

    if(n % 2){
        for(int i = 1; i <= n /2; i++){
            cout << " ";
        }
        cout << "^\n";
        for(int i = 1; i <= n/2; i++){
            for(int j = 1; j <= n/2 - i; j++){
                cout << " ";
            }
            cout << "/";
            for(int j = 1; j <= (i-1) * 2 + 1; j++){
                cout << " ";
            }
        cout << "\\\n";
    }
    }
    else{
        for(int i = 1; i <= n/2; i++){
            for(int j = 1; j <= n/2 - i; j++){
                cout << " ";
            }
            cout << "/";
            for(int j = 1; j <= (i-1) * 2; j++){
                cout << " ";
            }
        cout << "\\\n";
    }
    }
    

    for(int i = 0; i < n; i++){
        cout << "-";
    }
    cout << "\n";
    for(int i = 2; i <= n-1; i++){
        cout << "|";
        for(int j = 2; j <= n-1; j++){
            cout << " ";
        }
        cout << "|\n";
    }
    for(int i = 0; i < n; i++){
        cout << "-";
    }
    cout << "\n";

    
}