#include <bits/stdc++.h>

using namespace std;

int main(){
    float in = -1;
    cin >> in;
    while(in != 0){
        float temp = in;
        float i;
        for(i = 2; temp > 0; i++){
            temp -= 1 / i;
        }
        cout << i - 2 << " card(s)\n";

        cin >> in;

    }
}